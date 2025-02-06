/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://zerojudge.tw/ShowProblem?problemid=c382
 * Status: AC
 */

#include <cstdlib>
#include <cstring>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    long long int num1;
    long long int num2;
    char opr;

    cin >> num1 >> opr >> num2;

    switch (opr) {
    case '+':
        cout << num1 + num2;
        break;
    case '-':
        cout << num1 - num2;
        break;
    case '*':
        cout << num1 * num2;
        break;
    case '/':
        cout << num1 / num2;
        break;
    default:
        break;
    }

    cout << "\n";

    return 0;
}
