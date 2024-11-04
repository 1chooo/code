/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://zerojudge.tw/ShowProblem?problemid=a006
 * Status: AC
 */

#include <cmath>
#include <iostream>

using namespace std;

void discriminant(int, int, int);

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    discriminant(a, b, c);
    return 0;
}

void discriminant(int a, int b, int c) {
    int d = (b * b - 4 * a * c);

    if (d > 0) {
        int x1 = ((-b + sqrt(d)) / 2 * a);
        int x2 = ((-b - sqrt(d)) / 2 * a);
        cout << "Two different roots x1=" << x1 << " , " << "x2=" << x2 << endl;
    } else if (d == 0) {
        int x = ((-b) / (2 * a));
        cout << "Two same roots x=" << x << endl;
    } else {
        cout << "No real root" << endl;
    }

    return;
}
