/*
 * Author: @1chooo
 * Title: 10783 - Odd Sum
 * Required: Time limit: 3.000 seconds
 * Link: https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1724
 * Status: AC
 */

#include <iostream>

using namespace std;

int main() {
    int testCase;
    int time = 0;

    cin >> testCase;

    while (testCase--) {
        int a, b;

        cin >> a >> b;
        
        time++;

        int sum = 0;

        for (int i = a; i <= b; i++)
            if (i % 2 == 1)
            sum += i;
        printf("Case %d: %d\n", time, sum);
    }

    return 0;
}
