#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int n, tmp;

    while (cin >> n) {
        if (n == 1) {
            cin >> tmp;
            cout << "Jolly" << endl;
        } else {
            int seq[n];
            int check[n]; // check if 1~n-1 appeared

            for (int i = 0; i < n; i++) { // initially
                check[i] = 0;
            }

            for (int i = 0; i < n; i++) {
                cin >> seq[i];

                if (i != 0) {
                    tmp = abs(seq[i - 1] - seq[i]);
                    check[tmp] = 1;
                }
            }

            for (int i = 1; i < n; i++) {
                if (check[i] == 0) {
                    cout << "Not jolly" << endl;
                    break;
                }
                if (i == n - 1) {
                    cout << "Jolly" << endl;
                }
            }
        }
    }

    return 0;
}