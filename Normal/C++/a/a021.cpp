/*
*  Problem link: https://zerojudge.tw/ShowProblem?problemid=a021
*  Status: 
*/

#include <iostream>
#include <cstdlib>

#define MAX_SIZE 1000

using namespace std;

class BigNumber {

};

int main(void) {
    BigNumber num1, num2;
    char operator;

    cin >> num1 >> operator >> num2;
    
    switch (operator) {
        case '+': cout << x + y; break;
        case '-': cout << x - y; break;
        case '*': cout << x * y; break;
        case '/': cout << x / y; break;
        default: break;
    }
    
    cout << "\n";

    return 0;
}