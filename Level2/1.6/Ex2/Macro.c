/*
 * Objective:
 *   Test the MAX2 and MAX3 macros from Defs.h by finding the largest of
 *   two and of three integers and printing the results.
 *
 * Changes from previous version (1.6 Exercise 1):
 *   - Added a third variable c.
 *   - Replaced the PRINT1/PRINT2 calls with tests of MAX2 and MAX3.
 */

#include <stdio.h>
#include "Defs.h"

int main(void)
{
    /* Test values: b is the largest, so both macros should give 20 */
    int a = 10;
    int b = 20;
    int c = 15;

    /* Each macro expands to a ?: expression */
    int max2 = MAX2(a, b);          /* larger of a and b */
    int max3 = MAX3(a, b, c);       /* largest of a, b and c */

    printf("Max of %d and %d is: %d\n", a, b, max2);
    printf("Max of %d, %d and %d is: %d\n", a, b, c, max3);

    return 0;
}
