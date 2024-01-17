/*
 Problem link: https://zerojudge.tw/ShowProblem?problemid=d050
 Status: AC
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int sequence(int);

int main(void) {
    int n;

	while (cin >> n) {
		cout << ((n * (n - 1)) / 2 + 1) << endl;		
	}
    return 0;
}