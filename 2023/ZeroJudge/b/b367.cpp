/*
 Problem link: https://zerojudge.tw/ShowProblem?problemid=b367
 Status: AC
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(void) {
    int T = 0;

    cin >> T;

    for (int i = 0; i < T; i++) {
        int N = 0, M = 0;
        cin >> N >> M;
        
        int count = 0;
        int inputArray[N][M];
        int tempArray[N][M];

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                int temp = 0;

                cin >> temp;
                inputArray[i][j] = temp;
            }
        }

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                tempArray[i][j] = inputArray[N - 1 - i][M - 1 - j];
            }
        }
        
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (inputArray[i][j] == tempArray[i][j]) {
                    count++;
                }
            }
        }

        if (count == N * M) {
            cout << "go forward\n";
        } else {
            cout << "keep defending\n";
        }
    }

    return 0;
}