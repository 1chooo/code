/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1047
 * Status: AC
 */

#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

string solve(int n);

int main(void) {
    int testCase;

    scanf("%d", &testCase);

    while (testCase--) {
        int n;
        scanf("%d", &n);
        if (n < 10) {
            printf("%d\n", n);
            continue;
        }
        cout << solve(n) << endl;
    }

    return 0;
}

string solve(int n) {
    string ans = "";

    while (n != 1) {
        int i;
        for (i = 9; i > 1; i--) {
            if (n % i == 0) {
                n /= i;
                ans = (char)(i + '0') + ans;
                break;
            }
        }

        if (i == 1)
            return "-1";
    }

    return ans;
}
