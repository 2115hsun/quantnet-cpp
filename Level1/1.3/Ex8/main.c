/*
 * Level 1.3 - Exercise 8
 * Predict the output of each printf and write it in the comment beside it.
 */

/* Assignment operators */

#include <stdio.h>

int main()
{
    int x=2;
    int y;
    int z;

    x*=3+2;
    printf("x=%d\n", x);    /* prints: TODO */

    x*=y=z=4;
    printf("x=%d\n", x);    /* prints: TODO */

    x=y==z;
    printf("x=%d\n", x);    /* prints: TODO */

    return 0;
}
