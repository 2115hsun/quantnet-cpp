/*
 * Level 1.3 - Exercise 2
 * Read base and height from the user and print the area of a triangle
*/

#include <stdio.h>

int main(void)
{
    double height;
    double base;

    printf("Enter the height:");
    scanf("%lf", &height);

    printf("Enter the base:");
    scanf("%lf", &base);

    double area = 0.5 * base * height;
    printf("Area of triangle: %.2f\n", area);

    return 0;
}
