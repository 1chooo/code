#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int sumDigits(int num) {
    int sum = 0;

    while (num) {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

int main(void) {

    int num;

    while (cin >> num && num != 0) {
        int result = sumDigits(num);

        while (result > 9) {
            result = sumDigits(result);
        }

        cout << result << endl;
    }

    return 0;
}
