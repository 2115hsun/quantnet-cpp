/*
 * Level 1.4 - Exercise 5
 * Print a Celsius -> Fahrenheit table with a header, 0 to 19 C in steps
 * of 1, Fahrenheit with 1 decimal. Use a for loop.
*/

#include <stdio.h>

int main(void)
{
    int start = 0;
    int end = 19;
    int step = 1;

    printf("%10s %10s\n", "Celsius", "Fahrenheit");
    for (int celsius = start; celsius <= end; celsius += step)
    {
        double fahrenheit = (celsius * 9.0 / 5) + 32;
        printf("%10d %10.1f\n", celsius, fahrenheit);
    }
    

    return 0;
}
