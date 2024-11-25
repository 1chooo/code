/*
 * Author: @1chooo
 * Title: 10019 - Funny Encryption Method
 * Required: frequency limit: 3.000 seconds
 * Link: https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=960
 * Status: AC
 */

#include <iostream>

using namespace std;

int main() {
    int testCases, decimalNumber, binaryOnesDecimal, binaryOnesHexadecimal;
    cin >> testCases; // Input number of test cases

    while (testCases--) {
        cin >> decimalNumber; // Input the number to analyze
        binaryOnesDecimal = 0;
        binaryOnesHexadecimal = 0;

        // Count the number of 1's in the binary representation of the decimal number
        int decimalTemp = decimalNumber;
        while (decimalTemp != 0) {
            if (decimalTemp % 2 == 1)
                binaryOnesDecimal++;
            decimalTemp /= 2;
        }

        // Convert the decimal number to its hexadecimal representation digit by digit
        int thousands = (decimalNumber / 1000);
        int hundreds = ((decimalNumber % 1000) / 100);
        int tens = ((decimalNumber % 100) / 10);
        int units = (decimalNumber % 10);

        int hexEquivalent = (thousands * 4096) + (hundreds * 256) + (tens * 16) + units;

        // Count the number of 1's in the binary representation of the hexadecimal equivalent
        while (hexEquivalent != 0) {
            if (hexEquivalent % 2 == 1)
                binaryOnesHexadecimal++;
            hexEquivalent /= 2;
        }

        // Output the results
        cout << binaryOnesDecimal << " " << binaryOnesHexadecimal << endl;
    }

    return 0;
}
