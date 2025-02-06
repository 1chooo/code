/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://zerojudge.tw/ShowProblem?problemid=d065
 * Status: AC
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(void) {
    long int a = 0;
    long int b = 0;
    long int c = 0;

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
