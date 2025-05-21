/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://onlinejudge.org/setenceCount.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=431
 * Status: AC
 */

#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string lines[101];
    int setenceCount = 0;
    int maxLineLength = 0;

    while (getline(cin, lines[setenceCount])) {
        if (maxLineLength < lines[setenceCount].length())
            maxLineLength = lines[setenceCount].length();
        setenceCount++;
    }

    for (int i = 0; i < maxLineLength; i++) {
        for (int j = setenceCount - 1; j >= 0; j--) {
            if (lines[j].length() > i)
                cout << lines[j][i];
            else
                cout << ' ';
        }
        cout << endl;
    }

    return 0;
}
