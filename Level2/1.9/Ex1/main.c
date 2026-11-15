/*
 * Level 2 - 1.9 Exercise 1
 * Read characters from the keyboard and echo them line by line (when
 * Enter is pressed). Stop on ^A (value 1) and print
 * "CTRL + A is a correct ending."
*/

#include <stdio.h>

int main(void)
{
    int c;
    printf("Enter text (press CTRL + A to end):\n");

    while ((c = getchar()) != EOF) {
        if (c == 1) { // Check for CTRL + A
            printf("CTRL + A is a correct ending.\n");
            break;
        }
        putchar(c); // Echo the character
    }

    return 0;
}
