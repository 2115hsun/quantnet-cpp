/*
 * Objective:
 *   Demonstrate macros with arguments. main() gives the variables a and b
 *   a value, then prints a with PRINT1 and both a and b with PRINT2.
 *   Both macros are defined in the include file Defs.h.
 */

#include <stdio.h>
#include "Defs.h"

int main(void)
{
    /* Declare and initialise the two variables to print */
    int a = 10;
    int b = 20;

    /* Print a; the preprocessor replaces PRINT1(a) with a printf() call */
    PRINT1(a);

    /* Print a and b with the two-argument macro */
    PRINT2(a, b);

    return 0;
}
