/*
 * Objective:
 *   Ask the user for a day number (1-7) and print its name with the
 *   function DayName(), e.g. "Day 1 is a Sunday". The day names are
 *   hard-coded in an array of strings.
 */

#include <stdio.h>

/*
 * DayName: prints the name of the given day number.
 *   day: day number, 1 = Sunday ... 7 = Saturday
 */
void DayName(int day)
{
    /* Array of strings: each element points to one day name.
       Index 0 is Sunday, so day number n is stored at index n-1. */
    char *day_names[] = {
        "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"
    };

    /* Check the range first so day_names is never read out of bounds */
    if (day >= 1 && day <= 7) {
        printf("Day %d is a %s\n", day, day_names[day - 1]);
    } else {
        printf("Invalid day number. Please enter a number between 1 and 7.\n");
    }
}

int main(void)
{
    int day;            /* Day number entered by the user */

    /* Ask for and read the day number */
    printf("Enter a day number (1-7): ");
    scanf("%d", &day);

    DayName(day);

    return 0;
}
