/*
 * Author: @1chooo
 * Title: 10170 - The Hotel with Infinite Rooms
 * Required: Time limit: 3.000 seconds
 * Link:
 * Status: AC
 */

#include <iostream>

using namespace std;

int main() {
    long long int S, D;
    long long int area;
    
    while (cin >> S >> D) {
        for (int i = 0;; i++) {
            area = (S + (S + i)) * (i + 1) / 2;
            if (area >= D) {
                cout << S + i << endl;
                break;
            }
        }
    }

    return 0;
}

/*
 * Author: @1chooo
 * Title: 10170 - The Hotel with Infinite Rooms
 * Required: Time limit: 3.000 seconds
 * Link:
 * Status: AC
 */

#include <iostream>

using namespace std;

int main() {
    long long int s, d;
    long long int b;

    while (cin >> s >> d) {
        b = s;

        while ((b + s) * (b - s + 1) / 2 < d)
            b++;

        cout << b << endl;
    }

    return 0;
}
