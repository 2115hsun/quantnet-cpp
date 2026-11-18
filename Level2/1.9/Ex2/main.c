/*
 * Objective:
 *   Same as Exercise 1, but the characters go into a file the user names
 *   instead of onto the screen.
 *
 * Changes from previous version (1.9 Exercise 1):
 *   - Ask for the output file name and open the file for writing.
 *   - Write each character with fputc() instead of putchar().
 *   - Close the file at the end.
 */

#include <stdio.h>

int main(void)
{
    char filename[100];         /* File name the user types in */

    /* Read the file name. %99s leaves room for the '\0' */
    printf("Enter the output filename: ");
    scanf("%99s", filename);

    /* Open the file for writing, and quit if that fails */
    FILE *f = fopen(filename, "w");
    if (f == NULL) {
        perror("Error opening file");
        return 1;
    }
    int c;      /* Current character. It's an int so it can also hold EOF */
    printf("Enter text (press CTRL + A to end):\n");

    while ((c = getchar()) != EOF) {
        if (c == 1) {           /* ^A comes in as the value 1 */
            printf("CTRL + A is a correct ending.\n");
            break;
        }
        fputc(c, f);            /* Write the character to the file */
    }
    fclose(f);                  /* Close the file, which also writes out anything still buffered */
    return 0;
}
