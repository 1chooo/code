/*
 Problem link: https://zerojudge.tw/ShowProblem?problemid=c665
 Status: AC
*/

#include <iostream>
#include <cstring>
#include <stack>
#include <cstdlib>

using namespace std;

int main() {
    char str[1000];
    int base1, base2, temp;
    long long int number_10;

    stack<char> output;

    while (cin >> str >> base1 >> base2) {

        number_10 = 0; 
        temp = 1;
        
        for (int i = strlen(str) - 1; i >= 0; i--) {
            if (isdigit(str[i]))
                str[i] -= '0';
            else
                str[i] -= 'A' - 10;

            number_10 += str[i] * temp;
            temp *= base1;
        }

        while (number_10) {
            temp = number_10 % base2;
            number_10 /= base2;
            if (temp >= 10)
                temp = temp - 10 + 'A';
            else
                temp += '0';

            output.push((char)temp);
        }

        while (!output.empty()) {
            cout << output.top();
            output.pop();
        }
        cout << endl;
    }

    return 0;
}