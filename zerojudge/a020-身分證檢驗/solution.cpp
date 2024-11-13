/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://zerojudge.tw/ShowProblem?problemid=a020
 * Status: AC
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string city = "ABCDEFGHJKLMNPQRSTUVXYWZIO";
    string id;
    int enNum, total;
    int num = 8;

    cin >> id;

    for (int i = 0; i < 26; i++) {
        if (id[0] == city[i]) {
            enNum = i + 10;
        }
    }

    total = (enNum / 10) + (9 * (enNum % 10));

    int temp = (int)id[9] - 48;
    total += temp;

    for (int i = 1; i < 9; i++) {
        int temp = ((int)id[i] - 48) * num;
        total += temp;
        num--;
    }

    if (total % 10 == 0)
        cout << "real\n";
    else
        cout << "fake\n";

    return 0;
}
