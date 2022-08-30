/*
 Problem link: https://zerojudge.tw/ShowProblem?problemid=d827
 Status: AC
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(void) {
    int n = 0, ans = 0;
    
    cin >> n;

    if (n / 12 != 0)
        ans = ((n % 12) * 5) + ((n / 12) * 50);
    else
        ans = n * 5;

    cout << ans << endl;

    return 0;
}