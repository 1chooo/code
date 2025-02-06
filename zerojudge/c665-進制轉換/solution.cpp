/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://zerojudge.tw/ShowProblem?problemid=c665
 * Status: AC
 */

#include <cstdlib>
#include <cstring>
#include <iostream>
#include <stack>

using namespace std;

int main() {
    char inputNumber[1000];
    int sourceBase;
    int targetBase;

    stack<char> convertedDigits;

    while (cin >> inputNumber >> sourceBase >> targetBase) {

        long long int decimalValue = 0;
        int placeValue = 1;

        for (int i = strlen(inputNumber) - 1; i >= 0; i--) {
            if (isdigit(inputNumber[i]))
                inputNumber[i] -= '0';
            else
                inputNumber[i] -= 'A' - 10;

            decimalValue += inputNumber[i] * placeValue;
            placeValue *= sourceBase;
        }

        while (decimalValue) {
            int remainder = decimalValue % targetBase;
            decimalValue /= targetBase;
            if (remainder >= 10)
                remainder = remainder - 10 + 'A';
            else
                remainder += '0';

            convertedDigits.push((char)remainder);
        }

        while (!convertedDigits.empty()) {
            cout << convertedDigits.top();
            convertedDigits.pop();
        }
        cout << endl;
    }

    return 0;
}
