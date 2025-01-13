/*
 * Author: @1chooo
 * Title: 10190 Divide, But Not Quite Conquer!
 * Required: Time limit: 3.000 seconds
 * Link: https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1131
 * Status: AC
 */

#include <iostream>

using namespace std;

int main() {
    int n;
    int m;

    while (cin >> n >> m) {
        if (n < 2 || m < 2) {
            cout << "Boring!\n";
            continue;
        }

        int arr[40] = {};
        int count = 0;
        while (n % m == 0) {
            arr[count++] = n;
            n /= m;
        }

        if (n != 1)
            cout << "Boring!\n";
        else {
            for (int i = 0; i < count; ++i)
                cout << arr[i] << " ";
            cout << "1" << endl;
        }
    }

    return 0;
}
