/*
 * Author: @1chooo<hugo970217@gmail.com>
 * Problem link: https://zerojudge.tw/ShowProblem?problemid=e579
 * Status: AC
 */

#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int testCase;

    cin >> testCase;

    while (testCase--) {
        int day;
        int num;
        cin >> day >> num;
        vector<int> hartals;
        hartals.assign(day + 1, false);

        while (num--) {
            int interval;
            cin >> interval;
            for (int i = interval; i <= day; i += interval)
                hartals[i] = true;
        }

        for (int i = 6; i <= day; i += 7)
            hartals[i] = hartals[i + 1] = false;

        int count = 0;

        for (int i = 1; i <= day; i++)
            if (hartals[i])
                count++;

        cout << count << "\n";
    }

    return 0;
}

/*
 * Author: @1chooo
 * Title: 10050 - Hartals
 * Required: frequency limit: 3.000 seconds
 * Link: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=991
 * Status: AC
 */

#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int testCases;

    cin >> testCases;

    while (testCases--) {
        int simulationDays;
        int numParties;
        cin >> simulationDays >> numParties;
        vector<bool> hartals;
        hartals.assign(simulationDays + 1, false);

        while (numParties--) {
            int hartalParameter;
            cin >> hartalParameter;
            for (int day = hartalParameter; day <= simulationDays; day += hartalParameter)
                hartals[day] = true;
        }

        for (int day = 6; day <= simulationDays; day += 7)
            hartals[day] = hartals[day + 1] = false;

        int lostWorkingDays = 0;

        for (int day = 1; day <= simulationDays; day++)
            if (hartals[day])
                lostWorkingDays++;

        cout << lostWorkingDays << "\n";
    }

    return 0;
}
