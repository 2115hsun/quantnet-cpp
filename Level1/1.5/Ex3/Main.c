/*
 * Level 1.5 - Exercise 3 (Main.c)
 * Contains main(), gives the variable i a value and calls print()
 * from Print.c.
 *
 * Build: gcc Main.c Print.c -o ex3
 */

#include <stdio.h>

void print(int i);  /* defined in Print.c */

int main(void)
{
    int i = 5;
    print(i);

    return 0;
}
