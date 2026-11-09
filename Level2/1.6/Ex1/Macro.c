/*
 * Level 2 - 1.6 Exercise 1 (Macro.c)
 * Give a and b values in main(), then print a with PRINT1 and
 * a and b with PRINT2 (both macros live in Defs.h).
 *
 * Build: gcc Macro.c -o Macro
*/

#include <stdio.h>
#include "Defs.h"

int main(void)
{
    int a = 10;
    int b = 20;
    PRINT1(a);
    PRINT2(a, b);

    return 0;
}
