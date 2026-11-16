/*
 * Objective:
 *   Read characters from the keyboard until ^A (CTRL + A) and write them
 *   to a file whose name the user enters.
 *
 * Changes from previous version (1.9 Exercise 1):
 *   - Ask the user for the output file name and open the file for writing.
 *   - Write each character to the file with fputc() instead of putchar().
 *   - Close the file before exiting.
 */

#include <stdio.h>

int main(void)
{
    char filename[100];         /* Output file name entered by the user */

    /* Read the file name; %99s leaves room for the '\0' */
    printf("Enter the output filename: ");
    scanf("%99s", filename);

    /* Open the file for writing and stop if it cannot be opened */
    FILE *f = fopen(filename, "w");
    if (f == NULL) {
        perror("Error opening file");
        return 1;
    }
    int c;      /* Current input character; an int so it can also hold EOF */
    printf("Enter text (press CTRL + A to end):\n");

    while ((c = getchar()) != EOF) {
        if (c == 1) {           /* ^A has the value 1 */
            printf("CTRL + A is a correct ending.\n");
            break;
        }
        fputc(c, f);            /* Write the character to the file */
    }
    fclose(f);                  /* Write any buffered output and close the file */
    return 0;
}
