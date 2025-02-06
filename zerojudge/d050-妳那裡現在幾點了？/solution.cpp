/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://zerojudge.tw/ShowProblem?problemid=d050
 * Status: AC
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(void) {
    int hour;
    cin >> hour;

    if (hour >= 15) {
        cout << hour - 15 << endl;
    } else {
        cout << (hour - 15) + 24 << endl;
    }

    return 0;
}
