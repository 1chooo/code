/*
 Problem link: https://zerojudge.tw/ShowProblem?problemid=h213
 Status: AC
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(void) {
    int layer = 1023;

    long long int ans = (layer * (layer + 1) * (2 * layer + 1)) / 6;

    cout << ans;

    return 0;
}