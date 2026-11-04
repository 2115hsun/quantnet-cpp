/*
 * Level 1.4 - Exercise 4
 * Print a Fahrenheit -> Celsius table with a header, 0 to 300 F in
 * steps of 20, Celsius as "%10.1f". Start, end and step must be easy
 * to change. Use a while loop.  Celsius = (5/9) * (Fahrenheit - 32)
*/

#include <stdio.h>

int main(void)
{
    const int start = 0;
    const int end = 300;
    const int step = 20;

    printf("%10s %10s\n", "Fahrenheit", "Celsius");
    int fahrenheit = start;
    while (fahrenheit <= end) {
        double celsius = (5.0 / 9) * (fahrenheit - 32);
        printf("%10d %10.1f\n", fahrenheit, celsius);
        fahrenheit += step;
    }

    return 0;
}
