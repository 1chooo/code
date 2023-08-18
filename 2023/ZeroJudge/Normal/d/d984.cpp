/*
 Problem link: https://zerojudge.tw/ShowProblem?problemid=d984
 Status: AC
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(void) {
    long long int a = 0, b = 0, c = 0;
    char candidate[3] = {'A', 'B', 'C'};

    while (cin >> a >> b >> c) {
        if (a > b && a > c) {
            if (a > b + c) {
                cout << "A\n";
            } else if (b > c) {
                cout << "B\n";
            } else {
                cout << "C\n";
            }
        } else if (b > a && b > c) {
            if (b > a + c) {
                cout << "B\n";
            } else if (a > c) {
                cout << "A\n";
            } else {
                cout << "C\n";
            }
        } else {
            if (c > a + b) {
                cout << "C\n";
            } else if (a > b) {
                cout << "A\n";
            } else {
                cout << "B\n";
            }
        }
    }
    
    return 0;
}