/*
 * Level 1.3 - Exercise 4
 * Use an int 'married' (0 = false, non-zero = true) and the ?: operator
 * to print whether someone is married, ideally with a single printf.
*/

#include <stdio.h>

int main(void)
{
    int married = 0;

    printf("Married or not: %s\n", married ? "Married" : "Not married");

    return 0;
}
