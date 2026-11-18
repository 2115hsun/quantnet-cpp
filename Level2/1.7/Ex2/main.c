/*
 * Objective:
 *   Read up to 30 characters from the keyboard and print how long the
 *   string is with my own Length() function. Length() gets the address of
 *   the char array and counts characters until it hits the '\0'.
 */

/* Calculate the length of a string */
#include <stdio.h>
#define MAXLINE 30

// String length declaration
int Length(char str[]);

int main()
{
    char string[MAXLINE+1];     // Line of maximum 30 chars + \0
    int c;                      // The input character
    int i=0;                    // The counter

    // Print intro text
    printf("Type up to %d chars. Exit with ^Z\n", MAXLINE);

    // Keep reading until EOF or until the buffer is full
    while ((c=getchar())!=EOF && i<MAXLINE)
    {
        // Append entered character to string
        string[i++]=(char)c;
    }

    string[i]='\0';

    // Print the length I get back from Length()
    printf("String length is %d\n", Length(string));

    return 0;
}

/*
 * Length: returns how many characters are in the string, not counting
 *         the '\0' (the same answer strlen() would give).
 *   str: address of the first character
 */
int Length(char str[])
{
    int k = 0;                  // How many characters I've counted so far

    // Keep going until I reach the '\0'
    while (str[k] != '\0') {
        k++;                    // One more character
    }

    return k;
}
