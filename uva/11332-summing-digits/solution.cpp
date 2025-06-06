/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=25&page=show_problem&problem=2307
 * Status: AC
 */

#include <iostream>

using namespace std;

int sumDigits(long long int num);

int main(void) {
    long long int num = 0;

    while (cin >> num && num != 0) {

        while (num > 9) {
            num = sumDigits(num);
        }

        cout << num << endl;
    }

    return 0;
}

int sumDigits(long long int num) {
    int sum = 0;

    while (num) {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}
