/*
 Problem link: https://zerojudge.tw/ShowProblem?problemid=d050
 Status: AC
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(void) {
	int h;
	
	cin >> h;
	if (h >= 15) {
		cout << h - 15 << endl;
	} else {
		cout << (h - 15) + 24 << endl;
	}

    return 0; 
}
