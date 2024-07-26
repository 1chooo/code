/*
 Problem link: https://zerojudge.tw/ShowProblem?problemid=a248
 Status: AC
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(void) {
    long long int a = 0, b = 0;
    int N;

    while (cin >> a >> b >> N) {
        cout << a / b << ".";

        for (int i = 1; i <= N; i++) {
            cout << ((a % b) * 10) / b;
            a = ((a % b) * 10) % b;
        }

        cout << endl;
    }

    return 0;
}