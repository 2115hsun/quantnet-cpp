/*
 * Objective:
 *   Read characters from the keyboard and echo them to the screen line by
 *   line. Typing ^A (CTRL + A) ends the program with the message
 *   "CTRL + A is a correct ending."
 */

#include <stdio.h>

int main(void)
{
    int c;      /* Current character. It's an int so it can also hold EOF */
    printf("Enter text (press CTRL + A to end):\n");

    while ((c = getchar()) != EOF) {
        if (c == 1) {           /* ^A comes in as the value 1 */
            printf("CTRL + A is a correct ending.\n");
            break;
        }
        putchar(c);             /* Echo the character back */
    }

    return 0;
}
