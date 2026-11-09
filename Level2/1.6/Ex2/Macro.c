/*
 * Level 2 - 1.6 Exercise 2 (Macro.c)
 * Test MAX2 and MAX3 from Defs.h.
 *
 * Build: gcc Macro.c -o Macro
*/

#include <stdio.h>
#include "Defs.h"

int main(void)
{
    int a = 10;
    int b = 20;
    int c = 15;
    int max2 = MAX2(a, b);
    int max3 = MAX3(a, b, c);
    printf("Max of %d and %d is: %d\n", a, b, max2);
    printf("Max of %d, %d and %d is: %d\n", a, b, c, max3);

    return 0;
}
