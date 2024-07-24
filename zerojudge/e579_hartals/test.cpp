#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int testCases;
    int simulationDays;
    int numParties;
    int hartalParameter;
    vector<bool> hartals;

    cin >> testCases;

    while (testCases--) {
        cin >> simulationDays >> numParties;
        hartals.assign(simulationDays + 1, false);

        while (numParties--) {
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
