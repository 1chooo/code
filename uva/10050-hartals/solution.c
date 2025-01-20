/*
 * Author: @1chooo
 * Title: 10050 - Hartals
 * Required: frequency limit: 3.000 seconds
 * Link: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=991
 * Status: AC
 */

#include <stdbool.h>
#include <stdio.h>

int main(void) {
    int testCase;

    scanf("%d", &testCase);

    while (testCase--) {
        int simulationDays;
        int numParties;

        scanf("%d %d", &simulationDays, &numParties);

        bool hartals[3651];

        for (int day = 1; day <= simulationDays; day++) {
            hartals[day] = false;
        }

        while (numParties--) {
            int hartalParameter;

            scanf("%d", &hartalParameter);

            for (int day = hartalParameter; day <= simulationDays; day += hartalParameter) {
                hartals[day] = true;
            }
        }

        for (int day = 6; day <= simulationDays; day += 7) {
            hartals[day] = hartals[day + 1] = false;
        }

        int lostWorkingDays = 0;

        for (int day = 1; day <= simulationDays; day++) {
            if (hartals[day]) {
                lostWorkingDays++;
            }
        }

        printf("%d\n", lostWorkingDays);
    }

    return 0;
}
