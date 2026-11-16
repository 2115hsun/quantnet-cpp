/*
 * Objective:
 *   Read a string of at most 30 characters from the keyboard and print its
 *   length using Length(). Length() receives the address of the char array
 *   and counts characters up to the terminating '\0'.
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

    // Get the characters until EOF or until the buffer is full
    while ((c=getchar())!=EOF && i<MAXLINE)
    {
        // Append entered character to string
        string[i++]=(char)c;
    }

    string[i]='\0';

    // Print the length computed by Length()
    printf("String length is %d\n", Length(string));

    return 0;
}

/*
 * Length: returns the number of characters in a '\0'-terminated string,
 *         not counting the '\0' itself (same result as strlen()).
 *   str: address of the first character of the string
 */
int Length(char str[])
{
    int k = 0;                  // Number of characters counted so far

    // Step through the array until the terminating '\0' is reached
    while (str[k] != '\0') {
        k++;                    // One more character before the end
    }

    return k;
}
