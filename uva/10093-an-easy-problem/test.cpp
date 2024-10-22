#include <iostream>

using namespace std;

int main() {
    string inputString;

    while (1) {

        int sum = 0;
        int max = 1;
        int size;

        getline(cin, inputString);

        if (inputString == "-1") {
            break;
        }
        size = inputString.size();

        for (int i = 0; i < size; i++) {

            int R = 0;
            if (isdigit(inputString[i])) {
                R = inputString[i] - 48;
            } else if (isupper(inputString[i])) {
                R = inputString[i] - 55; // 'A'-10
            } else if (islower(inputString[i])) {
                R = inputString[i] - 61; // 'a'-36
            }
            sum += R;

            if (R > max) {
                max = R;
            }
        }
        for (int i = max; i <= 62; i++) {
            if ((sum % i) == 0) {
                cout << i + 1 << endl; // 所求N=i+1
                break;
            } else if (i == 62) {
                cout << "such number is impossible!" << endl;
            }
        }
    }

    return 0;
}