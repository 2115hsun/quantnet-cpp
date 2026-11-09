/*
 * Level 2 - 1.7 Exercise 1
 * Write Swap() that exchanges the values of two variables using pointer
 * arguments. Declare, initialise and print i and j in main()
 * (e.g. i=123, j=456 -> i=456, j=123).
*/

#include <stdio.h>

void Swap(int *i, int *j)
{
    int temp = *i;
    *i = *j;
    *j = temp;
}

int main(void)
{
    int i = 201;
    int j = 497;
    int *p_i = &i;
    int *p_j = &j;
    printf("Before swap: i = %d, j = %d\n", i, j);

    Swap(p_i, p_j);
    printf("After swap: i = %d, j = %d\n", i, j);

    return 0;
}
