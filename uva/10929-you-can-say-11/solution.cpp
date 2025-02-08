/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1870
 * Status: AC
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string num;

    while (cin >> num && num != "0") {
        int odd = 0;
        int even = 0;
        int sum = 0;

        for (int i = 0; i < num.length(); i++) {
            if (i % 2 == 1)
                odd += num[i] - '0';
            else
                even += num[i] - '0';
        }

        sum = odd - even;

        if (sum % 11 == 0)
            cout << num << " is a multiple of 11." << endl;
        else
            cout << num << " is not a multiple of 11." << endl;
    }

    return 0;
}

/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1870
 * Status: AC
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    string is1;

    while (cin >> is1) {
        if (is1 == "0") {
            break;
        }

        int odd = 0;
        int even = 0;
        for (int i = 0; i < is1.length(); i++) {
            if (i % 2 == 1) {
                odd = odd + (is1[i] - '0');
            } else {
                even = even + (is1[i] - '0');
            }
        }

        if ((odd - even) % 11 == 0) {
            cout << is1 << " is a multiple of 11." << endl;
        } else {
            cout << is1 << " is not a multiple of 11." << endl;
        }
    }
    return 0;
}
