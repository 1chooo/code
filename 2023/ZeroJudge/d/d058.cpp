/*
 Problem link: https://zerojudge.tw/ShowProblem?problemid=d058
 Status: AC
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(void) {
    int n = 0;

    cin >> n;

    (n >= 0) ? cout << ((n >= 1) ? 1 : 0) << endl : cout << -1 << endl;
    return 0;
}