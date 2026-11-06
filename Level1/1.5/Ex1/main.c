/*
 * Level 1.5 - Exercise 1
 * Call a function minus() that takes two arguments and returns their
 * difference (not absolute); print the result.
*/

#include <stdio.h>

double minus(double a, double b)
{
    return a - b;
}

int main(void)
{
    int a = 10;
    int b = 5;

    printf("The difference is: %f\n", minus(a, b));
    return 0;
}
