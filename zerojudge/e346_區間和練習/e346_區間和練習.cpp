/*
 Problem link: https://zerojudge.tw/ShowProblem?problemid=e346
 Status: AC
*/

#include <iostream>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    long long int arr[200001] = {}, ans = 0;
    int n = 0, q = 0;
    arr[0] = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        long long int temp = 0;

        cin >> temp;
        ans += temp;
        arr[i + 1] = ans;
    }

    cin >> q;
    for (int i = 0; i < q; i++) {
        int l = 0, r = 0;

        cin >> l >> r;

        cout << arr[r] - arr[l - 1] << endl;
    }

    return 0;
}