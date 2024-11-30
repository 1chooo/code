/*
 * Author: @1chooo
 * Title: 10071 - Back to High School Physics
 * Required: Time limit: 3.000 seconds
 * Link: https://uva.onlinejudge.org/index.php?Itemid=8&category=12&option=com_onlinejudge&page=show_problem&problem=1012
 * Status: AC
 */

#include <iostream>

using namespace std;

int main() {
    int v, t;

    while (cin >> v >> t)
        if (-100 <= v && v <= 100 &&
            0 <= t && t <= 200)
            cout << v * 2 * t << endl;
}
