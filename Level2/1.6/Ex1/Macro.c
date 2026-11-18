/*
 * Objective:
 *   Trying out macros with arguments. I give a and b values in main(),
 *   then print a with PRINT1 and both of them with PRINT2. The macros
 *   live in Defs.h.
 */

#include <stdio.h>
#include "Defs.h"

int main(void)
{
    /* The two values I want to print */
    int a = 10;
    int b = 20;

    /* The preprocessor swaps PRINT1(a) out for a printf() call */
    PRINT1(a);

    /* Same idea, but with two arguments */
    PRINT2(a, b);

    return 0;
}
