/*
 Problem link: https://zerojudge.tw/ShowProblem?problemid=e273
 Status: 
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(void) {
    int n;
    
    cin >> n;
    int ans[n - 1];

    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        ans[i] = temp;
    }
    int index = n - 1;
    for (int i = 0; i < n - 1; i++) {
        long long int temp = ans[i] * index;  
        printf("%d ", temp);
        index--;
    }

    cout << "\n";

    return 0;
}