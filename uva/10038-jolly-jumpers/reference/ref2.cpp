#include <cmath>
#include <iostream>
using namespace std;
int main() {
    int n, a[3000], c[3000], k;
    bool jolly;
    while (cin >> n) {
        jolly = true;
        cin >> a[0];
        for (int i = 0; i < n; i++)
            c[i] = 0;
        for (int i = 1; i < n; i++) {
            cin >> a[i];
            if (((a[i] - a[i - 1]) >= n) || () || ((a[i - 1] - a[i]) >= n)) {
                jolly = false; // a[i]與a[i-1]的差大於n或 a[i]與a[i-1]相等，就不是jolly
            }
            if ((a[i] - a[i - 1]) >= 0)
                k = a[i] - a[i - 1];
            else
                k = a[i - 1] - a[i];
            if (c[k] == _____) { // k曾經出現過就不是 jolly
                jolly = false;
            }
            if (c[k] == 0) { // k沒出現過，設為已出現
                c[k] = 1;
            }
        }
        if (jolly)
            cout << "Jolly" << endl;
        else
            cout << "Not jolly" << endl;
    }
    // system("pause");
}