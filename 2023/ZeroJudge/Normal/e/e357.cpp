/*
 Problem link: https://zerojudge.tw/ShowProblem?problemid=e357
 Status: 
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int F(int);

int main(void) {
    int x;

    cin >> x;

    cout << F(x) << endl;
    return 0;
}

int F(int x) {
    if (x == 1) {
        return 1;
    } else if (x % 2 == 0) {
        return F(x / 2);
    } else {
        return F(x - 1) + F(x + 1);
    }
}