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

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s[101];
    int index = 0;
    int max = 0;

    while (getline(cin, s[index])) {
        if (max < s[index].length()) { // find out the max length of strings
            max = s[index].length();
        }
        index++;
    }

    for (int i = 0; i < max; i++) {
        for (int j = index - 1; j >= 0; j--) {
            if (s[j].length() > i) {
                cout << s[j][i];
            } else {
                cout << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}
