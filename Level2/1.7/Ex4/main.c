/*
 * Level 2 - 1.7 Exercise 4
 * Write DayName() that prints the name of a day number, e.g.
 *   1 gives: Day 1 is a Sunday
 *   7 gives: Day 7 is a Saturday.
 * Hard-code the day names in an array of strings.
*/

#include <stdio.h>

void DayName(int day)
{
    char *day_names[] = {
        "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"
    };

    if (day >= 1 && day <= 7) {
        printf("Day %d is a %s\n", day, day_names[day - 1]);
    } else {
        printf("Invalid day number. Please enter a number between 1 and 7.\n");
    }
}


int main(void)
{
    int day;
    printf("Enter a day number (1-7): ");
    scanf("%d", &day);
    DayName(day);

    return 0;
}
