/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1176
 * Status: AC
 */

#include <cstdio>
#include <iostream>

using namespace std;

const int LIMIT = 1000000;

int reverse(int a);

int main(void) {
    bool composite[LIMIT + 5] = {true, true};

    for (int i = 2; i <= LIMIT; ++i) {
        if (!composite[i]) {
            for (int j = i + i; j <= LIMIT; j += i) {
                composite[j] = true;
            }
        }
    }

    int num;
    while (scanf("%d", &num) != EOF) {
        if (composite[num]) {
            cout << num << " is not prime." << endl;
            continue;
        }
        int reverseNum = reverse(num);
        if (reverseNum != num && !composite[reverseNum])
            cout << num << " is emirp." << endl;
        else
            cout << num << " is prime." << endl;
    }

    return 0;
}

int reverse(int a) {
    int b = 0;

    while (a != 0) {
        b *= 10;
        b += a % 10;
        a /= 10;
    }

    return b;
}
