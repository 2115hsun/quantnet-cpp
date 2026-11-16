/*
 * Objective:
 *   Swap the values of two variables with a function Swap() that takes
 *   pointers to them. C passes arguments by value, so Swap(int, int)
 *   would only swap local copies; passing the addresses lets Swap()
 *   change the caller's variables. i and j are declared, initialised
 *   and printed in main().
 */

#include <stdio.h>

/*
 * Swap: exchanges the values stored at two addresses.
 *   i: pointer to the first int
 *   j: pointer to the second int
 */
void Swap(int *i, int *j)
{
    int temp = *i;      /* Save the first value before it is overwritten */
    *i = *j;            /* Copy the second value into the first variable */
    *j = temp;          /* Put the saved first value into the second variable */
}

int main(void)
{
    /* Declare and initialise the two variables to swap */
    int i = 201;
    int j = 497;

    /* Pointers holding the addresses of i and j, passed to Swap() */
    int *p_i = &i;
    int *p_j = &j;

    printf("Before swap: i = %d, j = %d\n", i, j);

    /* Swap through the pointers, then show that i and j changed */
    Swap(p_i, p_j);
    printf("After swap: i = %d, j = %d\n", i, j);

    return 0;
}
