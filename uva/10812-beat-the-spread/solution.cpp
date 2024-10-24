/*
 * Author: @1chooo
 * Title: 10812 - Beat the Spread!
 * Required: Time limit: 3.000 seconds
 * Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1753
 * Status: AC
 */

#include <iostream>

using namespace std;

int main() {
    int n, s, d;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> s >> d;

        if (s > d &&
            ((s + d) % 2 == 0) &&
            ((s - d) % 2 == 0))
            printf("%d %d\n", (s + d) / 2, (s - d) / 2);
        else if (s == 0 && d == 0)
            cout << "0 0" << endl;
        else
            printf("impossible\n");
    }

    return 0;
}
