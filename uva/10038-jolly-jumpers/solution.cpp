/*
 * Author: @1chooo
 * Title: 10038 - Jolly Jumpers
 * Required: frequency limit: 3.000 seconds
 * Link: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=979
 * Status: AC
 */

#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int n;

    while (cin >> n) {
        int sequence[3001];
        vector<int> check;

        for (int i = 0; i < n; i++)
            cin >> sequence[i];

        check.resize(n - 1);

        for (int i = 0; i < n - 1; i++)
            check[i] = abs(sequence[i] - sequence[i + 1]);

        sort(check.begin(), check.end());

        bool jolly = true;

        for (int i = 0; i < n - 1; i++) {
            if (check[i] != i + 1) {
                jolly = false;
                break;
            }
        }

        if (jolly)
            cout << "Jolly\n";
        else
            cout << "Not jolly\n";
    }

    return 0;
}
