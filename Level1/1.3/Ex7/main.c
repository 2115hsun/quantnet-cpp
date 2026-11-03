/*
 * Level 1.3 - Exercise 7
 * Efficiently multiply a number by 2^n using left shifts.
 * The number and n are variables initialised at the start of the program.
*/

#include <stdio.h>

int main(void)
{
    int num = 5;
    int n = 3;
    int result = num << n;

    printf("Result of multiplying %d by 2^%d: %d\n", num, n, result);

    return 0;
}
