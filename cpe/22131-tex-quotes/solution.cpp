/*
 * Author: @1chooo<hugo970217@gmail.com>
 * Title: 22131 - TEX Quotes
 * Required: frequency limit: 3.000 seconds
 * Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=4&page=show_problem&problem=208
 * Status: AC
 */

#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string sentance;
    int count = 0;

    while (getline(cin, sentance)) {
        int length = sentance.length();

        for (int i = 0; i < length; i++) {
            if (sentance[i] == '\"') {
                count++;

                if (count % 2 == 1)
                    cout << "``";
                else
                    cout << "''";
            } else {
                cout << sentance[i];
            }
        }
        cout << endl;
    }
    
    return 0;
}
