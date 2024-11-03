/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://zerojudge.tw/ShowProblem?problemid=a005
 * Status: AC
 */

#include <iostream>

using namespace std;

int main() {
    int runTimes;
    cin >> runTimes;

    for (int i = 0; i < runTimes; i++) {
        int num[4];

        for (int j = 0; j < 4; j++) {
            cin >> num[j];
            cout << num[j] << " ";
        }

        if ((num[1] - num[0]) == (num[2] - num[1])) {
            cout << num[3] + (num[1] - num[0]) << endl;
        } else {
            cout << num[3] * (num[1] / num[0]) << endl;
        }
    }
    return 0;
}
