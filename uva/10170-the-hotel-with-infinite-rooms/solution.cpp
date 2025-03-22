/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1111
 * Status: AC
 */

#include <iostream>

using namespace std;

int main(void) {
    long long int s;
    long long int d;
    long long int area;

    while (cin >> s >> d) {
        for (int i = 0;; i++) {
            area = (s + (s + i)) * (i + 1) / 2;
            if (area >= d) {
                cout << s + i << endl;
                break;
            }
        }
    }

    return 0;
}

/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1111
 * Status: AC
 */

#include <iostream>

using namespace std;

int main() {
    long long int s;
    long long int d;
    long long int b;

    while (cin >> s >> d) {
        b = s;

        while ((b + s) * (b - s + 1) / 2 < d)
            b++;

        cout << b << endl;
    }

    return 0;
}
