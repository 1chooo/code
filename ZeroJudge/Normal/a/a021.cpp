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
    char opr;

    cin >> num1 >> opr >> num2;
    
    switch (opr) {
        case '+': cout << x + y; break;
        case '-': cout << x - y; break;
        case '*': cout << x * y; break;
        case '/': cout << x / y; break;
        default: break;
    }
    
    cout << "\n";

    return 0;
}