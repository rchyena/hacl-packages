#!/usr/bin/env python3

maxb = 7
bit1 = [
    "mulb 0x1",
    "mulb 0x1",
    "mulb 0x1",
    "mulb 0x1",
    "mulb 0x1",
]
bit0 = [
    "nop",
    "nop",
    "nop",
    "nop",
    "nop",
]

print("""
#ifndef __CFGBOOST_H__
#define __CFGBOOST_H__

#define cfgboost(x) helper_boost(x)
#define helper_boost(x) BOOST_##x
""")

for n in range(128):
    print(f'#define BOOST_{n} do {{ asm volatile (', end='')
    for i in range(maxb):
        bitp = bit1 if n & 1 else bit0
        for a in bitp:
            print(f' "{a}\\n"', end='')
        n = n >> 1
    print(' "xchg %ax,%ax \\n"); } while(0)')

print('''

#define BOOST_ID_BITS 7

__attribute__((always_inline)) inline
void dyn_cfgboost(int id)
{
    int i = 0;
    while (i < BOOST_ID_BITS) {
        if (id & 0x1) {
            /* Assembly for sending a bit "1" boost signal. */
            asm volatile
                (
                    "xchg %ax,%ax \\n"
                    ""
                );
        }
        else {
            /* Assembly for sending a bit "0" boost signal. */
            asm volatile
                (
                    "nop \\n"
                    ""
                );
        }
        id >>= 1;
        ++i;
    }
    return;
}

#endif
''')
