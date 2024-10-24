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
    int caseNum, a, b, time = 0;
    int sum;

    cin >> caseNum;

    while (caseNum--) {
        cin >> a >> b;
        time++;
        sum = 0;
        for (a; a <= b; a++)
            if (a % 2 == 1)
                sum += a;
        printf("Case %d: %d\n", time, sum);
    }

    return 0;
}
