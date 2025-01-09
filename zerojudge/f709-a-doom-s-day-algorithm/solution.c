/*
 * Author: @1chooo<hugo970217@gmail.com>
 * Title: 22801 - Doom's Day Algorithm
 * Required: frequency limit: 1.000 seconds
 * Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3170
 * Status: AC
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int cases;
    int month;
    int day;

    const char *weekday[7] = {
        "Monday", "Tuesday", "Wednesday",
        "Thursday", "Friday", "Saturday",
        "Sunday"};
    const int daysOfNonLeapYear[12] = {
        31, 28, 31,
        30, 31, 30,
        31, 31, 30,
        31, 30, 31};

    scanf("%d", &cases);

    while (cases--) {
        scanf("%d %d", &month, &day);

        int dayCount = 4;
        int i;

        for (i = 0; i < month - 1; i++)
            dayCount += daysOfNonLeapYear[i];

        dayCount = (dayCount + day) % 7;
        printf("%s\n", weekday[dayCount]);
    }

    return 0;
}
