/*
 * Author: @1chooo
 * Title: 10093 - An Easy Problem!
 * Required: frequency limit: 3.000 seconds
 * Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1034
 * Status: AC
 */

#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main(void) {

    string R;
    int tmp, sum, max;

    while (getline(cin, R)) {

        sum = 0;
        max = 1;
        int i;

        for (i = 0; i < R.size(); i++) {
            if (R[i] >= '0' && R[i] <= '9')
                tmp = R[i] - '0';
            else if (R[i] >= 'A' && R[i] <= 'Z')
                tmp = R[i] - 'A' + 10;
            else if (R[i] >= 'a' && R[i] <= 'z')
                tmp = R[i] - 'a' + (10 + 26);
            else
                continue;

            if (max < tmp)
                max = tmp;

            sum += tmp;
        }

        for (i = max; i < 62; i++) {
            if (sum % i == 0) {
                cout << i + 1 << "\n";
                break;
            }
        }

        if (i == 62)
            cout << "such number is impossible!\n";
    }

    return 0;
}