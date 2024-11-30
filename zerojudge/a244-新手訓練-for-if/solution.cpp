/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://zerojudge.tw/ShowProblem?problemid=a244
 * Status: AC
 */

#include <cmath>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(void) {
    int N, a;
    long long int b, c;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> a >> b >> c;

        switch (a) {
        case 1:
            cout << b + c;
            break;
        case 2:
            cout << b - c;
            break;
        case 3:
            cout << b * c;
            break;
        case 4:
            cout << b / c;
            break;
        default:
            break;
        }
        cout << "\n";
    }

    return 0;
}
