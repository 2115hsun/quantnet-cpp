/*
 * Level 1.4 - Exercise 3
 * Exercise 1 again, using switch-case instead of the if blocks.
*/

#include <stdio.h>

int main(void)
{
    int c;
    int char_count = 0;
    int word_count = 0;
    int newline_count = 0;
    int in_word = 0;

    while ((c = getchar()) !=EOF && c !=4) {
        char_count++;
    
    switch (c) { 
        case ' ':
        case '\t':
            in_word = 0;
            break; 
            case '\n':
            newline_count++;
            in_word = 0;
            break; 
            default:
            if (!in_word) {
            word_count++;
            in_word = 1;
        }
        break;
    }

}
    
printf("Number of characters: %d\n", char_count);
printf("Number of words: %d\n", word_count);
printf("Number of newlines: %d\n", newline_count);

    return 0;
}
