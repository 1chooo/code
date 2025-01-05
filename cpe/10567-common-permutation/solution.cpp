/*
 * Author: @1chooo<hugo970217@gmail.com>
 * Title: 10567 - Common Permutation
 * Required: frequency limit: 3.000 seconds
 * Link: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=1193
 * Status: AC
 */

#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string first;
    string second;

    while (getline(cin, first) && getline(cin, second)) {
        int letter[26] = {0};

        for (int i = 0; i < 26; i++) {
            int countFirst = count(first.begin(), first.end(), 'a' + i);
            int countSecond = count(second.begin(), second.end(), 'a' + i);

            letter[i] = min(countFirst, countSecond);

            if (letter[i] != 0)
                for (int j = 0; j < letter[i]; j++)
                    cout << static_cast<char>('a' + i);
        }
        cout << endl;
    }

    return 0;
}
