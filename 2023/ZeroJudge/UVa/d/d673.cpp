/*
 Problem link: https://zerojudge.tw/ShowProblem?problemid=d673
 Status: AC
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(void) {
    int lastNum = 0;
    int num = 1;

    while (cin >> lastNum && lastNum != -1) {
        int presentNum[12], needNum[12];

        for (int i = 0; i < 12; i++) {
            cin >> presentNum[i];
        }

        for (int i = 0; i < 12; i++) {
            cin >> needNum[i];
        }
        
        printf("Case %d:\n", num);

        for (int i = 0; i < 12; i++) {
            if (needNum[i] <= lastNum) {
                lastNum -= needNum[i];
                cout << "No problem! :D\n";
            } else {
                cout << "No problem. :(\n";
            }
            lastNum += presentNum[i];
        }

        num++;
    }

    return 0;
}