/*
 Problem link: https://zerojudge.tw/ShowProblem?problemid=c382
 Status: AC
*/

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <vector>

using namespace std;

int main(void) {
    long long int num1, num2;
    char opr;

    cin >> num1 >> opr >> num2;
    
    switch (opr) {
        case '+': cout << num1 + num2; break;
        case '-': cout << num1 - num2; break;
        case '*': cout << num1 * num2; break;
        case '/': cout << num1 / num2; break;
        default: break;
    }
    
    cout << "\n";

    return 0;
}