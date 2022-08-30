/*
 Problem link: https://zerojudge.tw/ShowProblem?problemid=d065
 Status: AC
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(void) {
    long int a = 0, b = 0, c = 0;

    cin >> a >> b >> c;

    if (a > b && a > c) {
        cout << a << endl;
    } else if (b > a && b > c) {
        cout << b << endl;
    } else {
        cout << c << endl;
    }

    return 0;
}