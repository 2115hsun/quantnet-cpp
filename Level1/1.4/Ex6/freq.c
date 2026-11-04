/*
 * Level 1.4 - Exercise 6 (freq.c)
 * Count how often each of the digits 0-4 is typed, and use default to
 * count all other characters. Stop at EOF (^Z on Windows). Use
 * switch-case, then print the counts.
*/

#include <stdio.h>

int main(void)
{
    int c;
    int zeros = 0;
    int ones = 0;
    int twos = 0;
    int threes = 0;
    int fours = 0;
    int others = 0;

    while ((c = getchar()) !=EOF && c !=4) {

    switch(c) { 
        case '0':
            zeros++;
            break; 
        case '1':
            ones++;
            break; 
        case '2':
            twos++;
            break; 
        case '3':
            threes++;
            break; 
        case '4':
            fours++;
            break; 
        default:
            others++;
            break;
    }

}

printf("Count of 0s: %d\n", zeros);
printf("Count of 1s: %d\n", ones);
printf("Count of 2s: %d\n", twos);
printf("Count of 3s: %d\n", threes);
printf("Count of 4s: %d\n", fours);
printf("Count of other characters: %d\n", others);

    return 0;
}
