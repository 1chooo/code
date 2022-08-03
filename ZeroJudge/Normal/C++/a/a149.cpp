/*
 Problem link: https://zerojudge.tw/ShowProblem?problemid=a149
 Status: AC
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(void) {
	int T;

	cin >> T;

	for (int i = 0; i < T; i++) {
		int temp;
        cin >> temp;

        if (temp == 0) {
            cout << 0 << endl;
        } else {
            int rest = 0;
		    int sum = 1;
		
		    while (temp > 0) {
			    rest = temp % 10;
			    temp /= 10;
			    sum *= rest;
		    }

		    cout << sum << endl;
        }
	}

	return 0;
}

