/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://zerojudge.tw/ShowProblem?problemid=d827
 * Status: AC
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(void) {
    int n = 0;
    int ans = 0;

    cin >> n;

    if (n / 12 != 0)
        ans = ((n % 12) * 5) + ((n / 12) * 50);
    else
        ans = n * 5;

    cout << ans << endl;

    return 0;
}
