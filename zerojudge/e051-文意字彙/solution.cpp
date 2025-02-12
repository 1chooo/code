/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://zerojudge.tw/ShowProblem?problemid=e051
 * Status: AC
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(void) {
    string str;

    cin >> str;

    cout << str[0];

    for (int i = 1; i < str.length() - 1; i++) {
        cout << "_";
    }
    cout << str[str.length() - 1] << endl;

    return 0;
}
