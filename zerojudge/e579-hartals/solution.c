/*
 * Author: @1chooo<hugo970217@gmail.com>
 * Problem link: https://zerojudge.tw/ShowProblem?problemid=e579
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
