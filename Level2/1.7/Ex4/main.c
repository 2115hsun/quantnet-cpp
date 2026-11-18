/*
 * Objective:
 *   Ask for a day number (1-7) and print its name with DayName(), so 1
 *   gives "Day 1 is a Sunday". I hard-coded the day names in an array of
 *   strings.
 */

#include <stdio.h>

/*
 * DayName: prints the name of a day number.
 *   day: 1 = Sunday ... 7 = Saturday
 */
void DayName(int day)
{
    /* Each element points to one day name. Sunday is at index 0,
       so day n is at index n-1. */
    char *day_names[] = {
        "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"
    };

    /* Check the range first so I never read past the end of the array */
    if (day >= 1 && day <= 7) {
        printf("Day %d is a %s\n", day, day_names[day - 1]);
    } else {
        printf("Invalid day number. Please enter a number between 1 and 7.\n");
    }
}

int main(void)
{
    int day;            /* Day number the user types in */

    /* Ask for the day number and read it */
    printf("Enter a day number (1-7): ");
    scanf("%d", &day);

    DayName(day);

    return 0;
}
