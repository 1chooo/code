/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://zerojudge.tw/ShowProblem?problemid=a147
 * Status: AC
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(void) {
    int n;

    while (cin >> n && n != 0) {
        for (int i = 1; i < n; i++) {
            if (i % 7 != 0) {
                cout << i << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}
