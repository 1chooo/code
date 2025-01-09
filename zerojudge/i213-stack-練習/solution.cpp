/*
 * @1chooo (Hugo ChunHo Lin)
 * Problem link: https://zerojudge.tw/ShowProblem?problemid=i213
 * Status: AC
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(void) {
    int size;
    int index = 0;

    cin >> size;

    int stack[size];

    for (int i = 0; i < size; i++) {
        int k;
        int temp;

        cin >> k;

        switch (k) {
        case 1:
            cin >> temp;
            stack[index] = temp;
            index++;
            break;
        case 2:
            index--;
            if (index == -1) {
                cout << -1 << endl;
                index++;
            } else {
                cout << stack[index] << endl;
                index++;
            }
            break;
        case 3:
            if (index == 0) {
                break;
            } else {
                index--;
            }
        default:
            break;
        }
    }

    return 0;
}
