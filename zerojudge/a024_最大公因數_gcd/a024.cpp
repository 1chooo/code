/*
 *  Problem link: https://zerojudge.tw/ShowProblem?problemid=a024
 *  Status: AC
 */

#include <iostream>

using namespace std;

int gcd(int, int);

int main(void) {
    int inNum1, inNum2;

    cin >> inNum1 >> inNum2;
    cout << gcd(inNum1, inNum2) << endl;

    return 0;
}

int gcd(int m, int n) {
    int t = 1;

    while (t != 0) {
        t = m % n;
        m = n;
        n = t;
    }

    return m;
}