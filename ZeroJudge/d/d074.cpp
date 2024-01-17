/*
 Problem link: https://zerojudge.tw/ShowProblem?problemid=d074
 Status: AC
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(void) {
    int n;
    int ans = 0;
    // int num[10] = {};

    cin >> n;

    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        if (temp > ans)
            ans = temp;
    }


    cout << ans << endl;

    return 0;
}