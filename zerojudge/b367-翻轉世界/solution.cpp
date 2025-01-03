/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://zerojudge.tw/ShowProblem?problemid=b367
 * Status: AC
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(void) {
    int time = 0;

    cin >> time;

    for (int i = 0; i < time; i++) {
        int n = 0;
        int m = 0;
        
        cin >> n >> m;

        int count = 0;
        int inputArray[n][m];
        int tempArray[n][m];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int temp = 0;

                cin >> temp;
                inputArray[i][j] = temp;
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                tempArray[i][j] = inputArray[n - 1 - i][m - 1 - j];
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (inputArray[i][j] == tempArray[i][j]) {
                    count++;
                }
            }
        }

        if (count == n * m)
            cout << "go forward\n";
        else
            cout << "keep defending\n";
    }

    return 0;
}
