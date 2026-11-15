/*
 * Level 2 - 1.9 Exercise 2
 * Exercise 1 again, but write the output to a file whose name the user
 * enters instead of to the screen.
*/

#include <stdio.h>

int main(void)
{
    char filename[100];
    printf("Enter the output filename: ");
    scanf("%99s", filename);
    FILE *f = fopen(filename, "w");
    if (f == NULL) {
        perror("Error opening file");
        return 1;
    }
    int c;
    printf("Enter text (press CTRL + A to end):\n");

    while ((c = getchar()) != EOF) {
        if (c == 1) { // Check for CTRL + A
            printf("CTRL + A is a correct ending.\n");
            break;
        }
        fputc(c, f); // Write the character to the file
    }
    fclose(f);
    return 0;

}
