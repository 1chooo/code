/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=4&page=show_problem&problem=208
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
    int length;
    int count = 0;

    while (getline(cin, sentance)) {
        length = sentance.length();

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

/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=4&page=show_problem&problem=208
 * Status: AC
 */

#include <iostream>

using namespace std;

int main(void) {
    char s;
    int n = 0;
    while (cin.get(s)) {
        if (s == '\"') {
            n++;
            if (n % 2 == 1)
                cout << "``";
            else
                cout << "''";
        } else
            cout << s;
    }

    return 0;
}

/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=4&page=show_problem&problem=208
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
    int length;
    int count = 0;

    while (getline(cin, sentance)) {
        length = sentance.length();

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
