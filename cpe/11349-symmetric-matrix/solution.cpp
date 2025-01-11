/*
 * Author: @1chooo<hugo970217@gmail.com>
 * Title: 11349 - Symmetric Matrix
 * Required: frequency limit: 1.000 seconds
 * Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2324
 * Status: AC
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int testCases;
    int testCount = 1;

    cin >> testCases;

    while (testCases--) {
        string strN;
        string strEqual;
        int n;
        long long arr[10500];

        cin >> strN >> strEqual >> n;

        int inputLen = n * n;

        for (int i = 0; i < inputLen; i++)
            cin >> arr[i];

        bool isSymmetric = true;

        for (int i = 0; i < (inputLen / 2 + 1); i++) {
            if (arr[i] != arr[inputLen - i - 1] ||
                arr[i] < 0) {
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
