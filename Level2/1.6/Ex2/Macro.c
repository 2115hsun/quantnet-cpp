/*
 * Objective:
 *   Testing MAX2 and MAX3 from Defs.h. I find the largest of two numbers
 *   and the largest of three, then print both.
 *
 * Changes from previous version (1.6 Exercise 1):
 *   - Added a third variable c.
 */

#include <stdio.h>
#include "Defs.h"

int main(void)
{
    /* b is the biggest, so both results should come out as 20 */
    int a = 10;
    int b = 20;
    int c = 15;

    /* Each macro turns into a ?: expression */
    int max2 = MAX2(a, b);          /* bigger of a and b */
    int max3 = MAX3(a, b, c);       /* biggest of a, b and c */

    printf("Max of %d and %d is: %d\n", a, b, max2);
    printf("Max of %d, %d and %d is: %d\n", a, b, c, max3);

    return 0;
}
