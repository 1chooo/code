/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://zerojudge.tw/ShowProblem?problemid=a034
 * Status: AC
 */

#include <cstdlib>
#include <iostream>
#include <stack>

#define MAX_SIZE 1000

using namespace std;

int main(void) {
    int inNum;

    while (cin >> inNum) {
        char ans[MAX_SIZE];
        int init = 0;

        while (inNum > 0) {
            if (inNum % 2 == 0) {
                ans[init] = '0';
                inNum /= 2;
                init++;
            } else {
                ans[init] = '1';
                inNum = (inNum - 1) / 2;
                init++;
            }
        }

        for (int i = init - 1; i >= 0; i--) {
            cout << ans[i];
        }
        cout << "\n";
    }

    return 0;
}
