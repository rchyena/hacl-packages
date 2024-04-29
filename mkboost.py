#!/usr/bin/env python3

import sys

# 1 byte nop: "nop",
# 2 byte nop: "xchg %ax,%ax",
# loud instr: "mulb 0x1",

maxb = 7
bit1 = [
    "xchg %ax,%ax",
    "xchg %ax,%ax",
    "xchg %ax,%ax",
    "xchg %ax,%ax",
    "xchg %ax,%ax",
]
# Warning: This instruction modifies flags and will break
#          the resulting binary.
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

def main():
    i = 0
    for line in sys.stdin:
        if '.cfi_endproc' in line:
            add_boost(i)
            i += 1
        print(line, end='')
        if line.startswith('\tj') or '.cfi_startproc' in line:
            add_boost(i)
            i += 1

def add_boost(n):
    i = n
    print(f'# Start BB ID {n}')
    for x in range(maxb):
        bitp = bit1 if i & 1 else bit0
        for a in bitp:
            print(f'\t{a}')
        print('# ---')
        i = i >> 1
    print(f'# End BB ID {n}')

if __name__ == '__main__':
    main()
