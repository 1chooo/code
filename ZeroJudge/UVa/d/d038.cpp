/*
 Problem link: https://zerojudge.tw/ShowProblem?problemid=d038
 Status: 
*/

#include <iostream>

using namespace std;

long long fibonacci[51] = { 1, 1 };

void Initialize() {
	for (int i = 2; i < 51; ++i) {
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }

    return;
}

/*
 It will show up TLE...
 long long int fibo(int n) {
    if (n <= 2) {
        return n;
    } else {
        int a = fibo(n - 1);
        int b = fibo(n - 2);
        return (a + b);
    }
 }
 */

int main() {
	// cin.sync_with_stdio(false); 
    // cin.tie(nullptr);

	Initialize();

	int length;

	while (cin >> length && length != 0) {
		cout << fibonacci[length] << '\n';
        // cout << fibo(length) << "\n";
    }

    return 0;
}