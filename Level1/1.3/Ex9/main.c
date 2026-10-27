/*
 * Level 1.3 - Exercise 9
 * Predict the output of each printf and write it in the comment beside it.
 */

/* Conditional expressions */

#include <stdio.h>

int main()
{
    int x=1;
    int y=1;
    int z=1;

    x+=y+=x;                        // Number 1
    printf("%d\n\n", (x<y)?y:x);    // Number 2   prints: TODO
    printf("%d\n", (x<y)?x++:y++);  // Number 3   prints: TODO
    printf("%d\n", x);              // Number 4   prints: TODO
    printf("%d\n", y);              //            prints: TODO

    return 0;
}
