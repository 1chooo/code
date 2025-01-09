/*
 * Author: @1chooo
 * Title: 10222 - Decode the Mad man
 * Required: frequency limit: 3.000 seconds
 * Link: https://zerojudge.tw/ShowProblem?problemid=e578
 * Status: AC
 */

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(void) {

    string message;
    const string table = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";

    getline(cin, message);

    for (int i = 0; i < message.size(); i++) {
        if (message[i] == ' ')
            cout << " ";
        else
            cout << table[table.find(message[i]) - 2];
    }

    cout << "\n";

    return 0;
}