#include <iostream>
#include <string>

using namespace std;

int main() {
    string a[101];
    int n = 0;
    int max = 0;
    while (getline(cin, a[n]) && a[n] != "") {
        if (a[n].length() > max) {
            max = a[n].length();
        }
        n++;
    }
    for (int i = 0; i < max; i++) {
        for (int j = n - 1; j >= 0; j--) {
            if (a[j].length() > i) {
                cout << a[j][i];
            } else {
                cout << ' ';
            }
        }
        cout << endl;
    }
}