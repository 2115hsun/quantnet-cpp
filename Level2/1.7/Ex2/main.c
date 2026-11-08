/*
 * Level 2 - 1.7 Exercise 2
 * Implement Length(), which returns the length of a string like strlen()
 * does (without using strlen). Length() receives the array's address.
 * End input with ^Z (EOF) on Windows.
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

    // Get the characters
    while ((c=getchar())!=EOF && i<MAXLINE)
    {
        // Append entered character to string
        string[i++]=(char)c;
    }

    string[i]='\0';             // String must be closed with \0

    printf("String length is %d\n", Length(string));

    return 0;
}

/* Implement the Length() function here */
int Length(char str[])
{
    /* TODO */
    return 0;
}
