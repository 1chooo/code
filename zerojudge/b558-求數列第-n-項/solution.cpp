/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://zerojudge.tw/ShowProblem?problemid=b558
 * Status: AC
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(void) {
    int n;

    while (cin >> n) {
        cout << ((n * (n - 1)) / 2 + 1) << endl;
    }

    return 0;
}
