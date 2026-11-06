/*
 * Level 1.5 - Exercise 4
 * Recursive function printnumber(int) that prints an integer digit by
 * digit with putchar() (no printf). Use % for the digit and / for the
 * recursive argument. Handle negative numbers.
*/

#include <stdio.h>

void printnumber(int n)
{
    if (n < 0) {
        putchar('-');
        n = -n;
    }
    if (n / 10) {
        printnumber(n / 10);
    }
    putchar(n % 10 + '0');
}

int main(void)
{
    printnumber(1305);
    putchar('\n');

    return 0;
}
