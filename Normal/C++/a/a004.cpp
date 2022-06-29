/*
*  Problem link: https://zerojudge.tw/ShowProblem?problemid=a004
*  Status: AC
*/

#include <iostream>

using namespace std;

int main () 
{
    int year;

    // Input constantly until EOF
    while (cin >> year) {
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
            cout << "閏年" << endl;
        } else {
            cout << "平年" << endl;
        }
    }
    return 0;
}