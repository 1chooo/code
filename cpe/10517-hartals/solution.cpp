/*
 * Author: @1chooo<hugo970217@gmail.com>
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
    int cases;
    int day;
    int num;
    int interval;
    vector<int> hartals;

    cin >> cases;

    while (cases--) {
        cin >> day >> num;
        hartals.assign(day + 1, false);

        while (num--) {
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
