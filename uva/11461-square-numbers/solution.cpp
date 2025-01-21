/*
 * Author: @1chooo
 * Title: 11416 - Square Numbers
 * Required: frequency limit: 1.000 seconds
 * Link: https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2456
 * Status: AC
 */

#include <iostream>

using namespace std;

int main() {
    int num1;
    int num2;

    while (cin >> num1 >> num2) {
        if (num1 == 0 && num2 == 0)
            break;

        int sum = 0;
        int num[350] = {};

        for (int i = 0; i < 350; i++) {
            num[i] = i * i;
        }

        for (int i = num1; i <= num2; i++)
            for (int k = 0; k < 350; k++)
                if (i == num[k])
                    sum++;

        cout << sum << endl;
    }

    return 0;
}
