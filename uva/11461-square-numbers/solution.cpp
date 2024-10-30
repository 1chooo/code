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
    int num[350] = {};
    int num1, num2;

    for (int i = 0; i < 350; i++) {
        num[i] = i * i;
    }
    
    while (cin >> num1 >> num2) {
        int sum = 0;
        if (num1 == 0 && num2 == 0)
            break;
        for (num1; num1 <= num2; num1++)
            for (int k = 0; k < 350; k++)
                if (num1 == num[k])
                    sum++;

        cout << sum << endl;
    }
    return 0;
}
