/*
 * Objective:
 *   Swap two variables with a Swap() function that takes pointers. C passes
 *   arguments by value, so if Swap() took plain ints it would only swap its
 *   own copies. Passing the addresses lets it change i and j in main(),
 *   where I declare, set and print them.
 */

#include <stdio.h>

/*
 * Swap: swaps the values at two addresses.
 *   i: pointer to the first int
 *   j: pointer to the second int
 */
void Swap(int *i, int *j)
{
    int temp = *i;      /* Hang on to the first value before I overwrite it */
    *i = *j;            /* Copy the second value into the first */
    *j = temp;          /* Put the saved first value into the second */
}

int main(void)
{
    /* The two values I'm going to swap */
    int i = 201;
    int j = 497;

    /* Pointers to i and j that I pass to Swap() */
    int *p_i = &i;
    int *p_j = &j;

    printf("Before swap: i = %d, j = %d\n", i, j);

    /* Swap through the pointers, then print again to check it worked */
    Swap(p_i, p_j);
    printf("After swap: i = %d, j = %d\n", i, j);

    return 0;
}
