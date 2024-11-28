/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://zerojudge.tw/ShowProblem?problemid=a215
 * Status: AC
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main(void) {
    int n, m;

    while (cin >> n >> m) {
        int count = 0;
        int sum = 0;
        for (int i = n; i <= (10000 + n); i++) {
            count++;
            sum += i;

            if (sum > m) {
                break;
            }
        }

        cout << count << endl;
    }

    return 0;
}