/*
 * Level 1.5 - Exercise 2
 * Print the factorial of a number using a recursive function.
*/

#include <stdio.h>
long long factorial(int n) 
    {
        if (n <= 1) {
            return 1;
        } else {
            return n * factorial(n - 1);
        }
    }

int main(void)
{
    int num = 13;
    printf("Factorial of %d is: %lld\n", num, factorial(num));
    return 0;
}
