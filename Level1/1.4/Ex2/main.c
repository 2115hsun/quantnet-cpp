/*
 * Level 1.4 - Exercise 2
 * Exercise 1 again, using do-while instead of while.
*/

#include <stdio.h>

int main(void)
{
    int c;
    int char_count = 0;
    int word_count = 0;
    int newline_count = 0;
    int in_word = 0;

    do {c = getchar();
        if (c != EOF && c != 4) {
            char_count++;
        if (c == ' ' || c == '\t' || c == '\n') 
            in_word = 0;
        } else if (!in_word) {
            word_count++; 
            in_word = 1;
        }
        if (c == '\n') {
            newline_count++;
        }
    } while (c != EOF && c != 4);
    
    printf("Number of characters: %d\n", char_count);
    printf("Number of words: %d\n", word_count);
    printf("Number of newlines: %d\n", newline_count);

    return 0;
}
