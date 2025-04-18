/*
 * Author: @1chooo
 * Title: 11677 - Alarm Clock
 * Required: frequency limit: 1.000 seconds
 * Link:
 * Status: AC
 */

#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    
    while ((cin >> a >> b >> c >> d)) {
        if (a == b && b == c && c == d && d == 0)
            break;
        else if (a > c || (a == c && b > d))
            cout << 1440 - ((60 * a + b) - (60 * c + d)) << endl;
        else
            cout << (60 * c + d) - (60 * a + b) << endl;
    }

    return 0;
}
