/*
 * Level 1.4 - Exercise 7 (freq.c, extended from Exercise 6)
 * Also print the frequency of the digit 3 in words, e.g.
 * "Number three appears two times." If it is three or more, print
 * "The number three appears more than two times."
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

    switch(threes) {
        case 0:
            printf("The number three does not appear.\n");
            break;
        case 1:
            printf("The number three appears one time.\n");
            break;
        case 2:
            printf("The number three appears two times.\n");
            break;
        default:
            printf("The number three appears more than two times.\n");
            break;
    }

printf("Count of 0s: %d\n", zeros);
printf("Count of 1s: %d\n", ones);
printf("Count of 2s: %d\n", twos);
printf("Count of 3s: %d\n", threes);
printf("Count of 4s: %d\n", fours);
printf("Count of other characters: %d\n", others);


    return 0;
}
