/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://zerojudge.tw/ShowProblem?problemid=e513
 * Status: AC
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int testCase;
    int testCount = 1;

    cin >> testCase;

    while (testCase--) {
        string strN;
        string strEqual;
        int n;

        cin >> strN >> strEqual >> n;

        int inputLen = n * n;
        long long arr[10500];

        for (int i = 0; i < inputLen; i++)
            cin >> arr[i];

        bool isSymmetric = true;

        for (int i = 0; i < (inputLen / 2 + 1); i++) {
            if (arr[i] != arr[inputLen - i - 1] ||
                arr[i] < 0 ||
                arr[inputLen - i - 1] < 0) {
                isSymmetric = false;
                break;
            }
        }

        if (isSymmetric)
            cout << "Test #" << testCount << ": Symmetric." << '\n';
        else
            cout << "Test #" << testCount << ": Non-symmetric." << '\n';

        testCount++;
    }

    return 0;
}
