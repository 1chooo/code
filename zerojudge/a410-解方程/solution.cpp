/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://zerojudge.tw/ShowProblem?problemid=a410
 * Status: AC
 * Reference: https://zh.wikipedia.org/wiki/%E5%85%8B%E8%90%8A%E5%A7%86%E6%B3%95%E5%89%87
 */

#include <cmath>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(void) {
    double a, b, c;
    double d, e, f;

    cin >> a >> b >> c;
    cin >> d >> e >> f;

    if (a * e == b * d) {
        if (a * f == c * d)
            cout << "Too many" << endl;
        else
            cout << "No answer" << endl;
    } else {
        double x = (c * e - b * f) / (a * e - b * d);
        double y = (c * d - a * f) / (b * d - a * e);

        printf("x=%.2f\n", x);
        printf("y=%.2f\n", y);
    }

    return 0;
}
