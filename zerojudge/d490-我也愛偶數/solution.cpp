/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://zerojudge.tw/ShowProblem?problemid=d490
 * Status: AC
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(void) {
    long int a = 0;
    long int b = 0;
    long int ans = 0;

    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) {
            ans += i;
        }
    }

    cout << ans << endl;

    return 0;
}
