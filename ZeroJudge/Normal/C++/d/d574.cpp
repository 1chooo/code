/*
 Problem link: https://zerojudge.tw/ShowProblem?problemid=d574
 Status: 
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(void) {
    int num;
    string inStr;
    int count = 1;

    cin >> num;
    cin >> inStr;

    for (int i = 0; i < num; i++) {
		if (inStr[i] == inStr[i + 1]) {
			count++;
		} else {
			cout << count;
            cout << inStr[i];
			count = 1;
		}
    }

	return 0;
}
