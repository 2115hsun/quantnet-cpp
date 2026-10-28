/*
 * Level 1.3 - Exercise 5
 * Show clearly the difference between --i and i--.
*/

#include <stdio.h>

int main(void)
{
    int i = 5;
    int x;

    x = i--;
    printf("Post-decrement: x = %d, i = %d\n", x, i);

    /* i--: use the value, then decrement*/

    i = 5;
    x = --i;
    printf("Pre-decrement:  x = %d, i = %d\n", x, i);

    return 0;
}
