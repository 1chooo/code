/*
*  Problem link: https://zerojudge.tw/ShowProblem?problemid=a038
*  Status: AC
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(void) {
    string inStr;

    cin >> inStr;

    int inStrLen = inStr.length();
    int mark = 0;
    int pivot = inStrLen;
    int i = inStrLen;

    while (mark != 1) {
        i--;

        if (i == 0)
            break;
        if (inStr[i] != '0') {
            mark = 1;       // Mark the place which start with non-zero;
        }
        pivot = i;          // Record the place.
    }

    if (mark == 0)
        cout << 0 << endl;          // if the whole number is zero.
    else {
        for (int j = pivot; j >= 0; j--) {
            cout << inStr[j];
        }
        cout << "\n";
    } 

    return 0;
}