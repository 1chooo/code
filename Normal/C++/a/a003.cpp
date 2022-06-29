/*
 Problem link: https://zerojudge.tw/ShowProblem?problemid=a003
 Status: AC
*/


#include <iostream>

using namespace std;

int decideFortune(int, int);

int main() 
{
    int month, day;

    cin >> month >> day;
    decideFortune(month, day);
    return 0;
}

int decideFortune (int month, int day) {
    int s = (month * 2 + day) % 3;

    if (s == 0) {
        cout << "普通" << endl;
    } else if (s == 1) {
        cout << "吉" << endl;
    } else {
        cout << "大吉" << endl;
    }

    return 0;
}
