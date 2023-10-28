/*
 Problem link: https://zerojudge.tw/ShowProblem?problemid=a104
 Status: AC
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(void) {
    int num;
    
    while (cin >> num) {
        int arr[1000] = {};
        int temp;
        
        for (int i = 0; i < num; i++) {
            cin >> temp;
            arr[i] = temp;
        }

        // for (int i = 0; i < num; i++) {
        //     cout << arr[i] << " ";
        // }

        // cout << "\n";

        for (int i = 0; i < num; i++) {
            int temp = i;

            for (int j = i; j < num; j++) {
                if (arr[temp] > arr[j]) {
                    int temp1 = arr[j];
                    arr[j] = arr[temp];
                    arr[temp] = temp1;
                }
            }
        }

        for (int i = 0; i < num; i++) {
            cout << arr[i] << " ";
        }

        cout << "\n";
    }

    return 0;
}
