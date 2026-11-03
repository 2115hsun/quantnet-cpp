/*
 * Level 1.3 - Exercise 6
 * Read an integer, shift it two places to the right, print the result,
 * and say whether a logical or arithmetic shift was performed
 * (whether a 1 or 0 was shifted in on the left).
*/

#include <stdio.h>

int main(void)
{
    
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int shifted_right = num >> 2;
    printf("Shifted right by 2: %d\n", shifted_right);

    if (num < 0 && shifted_right < 0) {
        printf("Arithmetic shift performed (1 shifted in on the left)\n");
    } else if (num < 0 && shifted_right >= 0) {
        printf("Logical shift performed (0 shifted in on the left)\n");
    } else {
        printf("0 shifted in on the left; logical and arithmetic shifts give the same result for non-negative numbers\n");
    }

    return 0;
}
