/*
 Problem link: https://zerojudge.tw/ShowProblem?problemid=a053
 Status: AC
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(void) {
		int inNum;

        cin >> inNum;

		if (inNum <= 10) {
				cout << 6 * inNum << endl;
		} else if (inNum >= 11 && inNum <= 20) {
				cout << 60 + (inNum - 10) * 2 << endl;
		} else if (inNum >= 21 && inNum <= 40) {
				cout << 80 + (inNum - 20) << endl;
		} else {
				cout << 100 << endl;
		}

    return 0;
}
