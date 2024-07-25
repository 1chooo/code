/*
*  Problem link: https://zerojudge.tw/ShowProblem?problemid=a040
*  Status: AC
*/

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(void) {
    int n, m;
    int check = 0;

    cin >> n >> m;

    for (int i = n; i < m; i++) {
        
        int digit = 0;
        int temp = 0;
        int total = 0;

        temp = i;
        while (temp > 0) {
            digit++;
            temp /= 10;
        }

        temp = i;
        while (temp > 0) {
            total += pow(temp % 10, digit);
            temp /= 10;
        }

        if (total == i) {
            cout << i << " ";
            check++;
        }
    }

    if (check == 0) {
        cout << "none";
    }

    cout << "\n";
		
	return 0;
}