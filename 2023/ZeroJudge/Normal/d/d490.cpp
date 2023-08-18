/*
 Problem link: https://zerojudge.tw/ShowProblem?problemid=d490
 Status: AC
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(void) {
    long int a = 0, b = 0, ans = 0;

    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) {
            ans += i;
        }
    }

    cout << ans << endl;

    return 0;
}