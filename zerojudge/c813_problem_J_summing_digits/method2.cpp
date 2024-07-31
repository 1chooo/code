/*
 * Author: @1chooo
 * Title: 11332 Summing Digits
 * Required: frequency limit: 3.000 seconds
 * Link: https://zerojudge.tw/ShowProblem?problemid=c813
 * Status: AC
 */

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int sumDigits(long long int num) {
    int sum = 0;

    while (num) {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

int main(void) {

    long long int num;

    while (cin >> num && num != 0) {

        while (num > 9) {
            num = sumDigits(num);
        }

        cout << num << endl;
    }

    return 0;
}