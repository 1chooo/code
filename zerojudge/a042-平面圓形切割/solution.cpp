/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://zerojudge.tw/ShowProblem?problemid=a042
 * Status: AC
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(void) {
    int inNum;

    while (cin >> inNum) {
        cout << ((inNum * inNum) - inNum + 2) << endl;
    }

    return 0;
}
