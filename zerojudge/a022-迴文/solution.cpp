/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://zerojudge.tw/ShowProblem?problemid=a022
 * Status: AC
 */

#include <iostream>

using namespace std;

int main(void) {
    string inStr;
    int inStrLen, pivot, count;

    cin >> inStr;
    inStrLen = inStr.length();

    if (inStrLen % 2 == 0) {
        pivot = inStrLen / 2;
    } else {
        pivot = (inStrLen - 1) / 2;
    }

    for (int i = 0; i < pivot; i++) {
        if (inStr[i] == inStr[inStrLen - 1 - i])
            count++;
    }

    if (count == pivot)
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    return 0;
}