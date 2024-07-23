/*
 Problem link: https://zerojudge.tw/ShowProblem?problemid=e351
 Status: AC
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(void) {
    unsigned long long int a = 0, b = 0;

    while (cin >> a >> b) {
        unsigned long long int ans = 0;

        for (int i = 31; i >= 0 ; i--) {
            if ((a & (1 << i)) == (b & (1 << i)))
                ans += (a & (1 << i));
            else 
                break;
        }

        cout << ans << endl;
    }
    return 0;
}