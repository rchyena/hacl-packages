#ifndef __CFGBOOST_H__
#define __CFGBOOST_H__

#define BOOST_ID_BITS 7

__attribute__((always_inline)) inline
void cfgboost(int id)
{
    int i = 0;
    while (i < BOOST_ID_BITS) {
        if (id & 0x1) {
            /* Assembly for sending a bit "1" boost signal. */
            asm volatile
                (
                    "xchg %ax,%ax \n"
                    ""
                );
        }
        else {
            /* Assembly for sending a bit "0" boost signal. */
            asm volatile
                (
                    "nop \n"
                    ""
                );
        }
        id >>= 1;
        ++i;
    }
    return;
}


#endif
