/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://zerojudge.tw/ShowProblem?problemid=a216
 * Status: AC
 */

#include <iostream>
#include <cstdlib>

using namespace std;

long long int f(int), g(int);

int main(void) {
    int n;

    while (cin >> n) {
        cout << f(n) << " " << g(n) << endl;
    }

    return 0;
}

long long int f(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + f(n - 1);
    }
}

long long int g(int n) {
    if (n == 1) {
        return 1;
    } else {
        return f(n) + g (n - 1);
    }
}