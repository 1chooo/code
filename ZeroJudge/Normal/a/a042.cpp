/*
*  Problem link: https://zerojudge.tw/ShowProblem?problemid=a042
*  Status: AC
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(void) {
    int inNum;

    while (cin >> inNum) {
        cout << ((inNum * inNum) - inNum + 2) << endl;
    }

    return 0;
}