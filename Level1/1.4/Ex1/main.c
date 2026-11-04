/*
 * Level 1.4 - Exercise 1
 * Read text with getchar() until ^D (ASCII 4) and print the number of
 * characters, words and newlines. Consecutive spaces count as one
 * separator. Use a while loop.
*/

#include <stdio.h>

int main(void)
{
    int c;
    int char_count = 0;
    int word_count = 0;
    int newline_count = 0;
    int in_word = 0;

    while ((c = getchar()) != EOF) {
        char_count++;
        if (c == ' ' || c == '\t' || c == '\n') {
            in_word = 0;
        } else if (!in_word) {
            word_count++;
            in_word = 1;
        }
        if (c == '\n') {
            newline_count++;
        }
    }

    printf("Number of characters: %d\n", char_count);
    printf("Number of words: %d\n", word_count);
    printf("Number of newlines: %d\n", newline_count);

    return 0;
}
