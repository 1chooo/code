/*
 * Author: @1chooo
 * Title: 11417 - GCD
 * Required: frequency limit: 3.000 seconds
 * Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2412
 * Status: AC
 */

#include <iostream>

using namespace std;

int gcd(int x, int y) {
    int r = 0;
    while (y != 0) {
        r = x % y;
        x = y;
        y = r;
    }
    return x;
}

int main() {
    int ans[507] = {0}, n;
    for (int i = 1; i < 507; i++) {
        ans[i] = ans[i - 1];
        for (int j = 1; j < i; j++)
            ans[i] += gcd(i, j);
    }
    while (cin >> n) {
        if (n == 0)
            break;
        else
            cout << ans[n] << endl;
    }
    return 0;
}

/*
 * Author: @1chooo
 * Title: 11417 - GCD
 * Required: frequency limit: 3.000 seconds
 * Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2412
 * Status: AC
 */

#include <iostream>

using namespace std;

int GCD(int, int); // 自訂函數的原型宣告

int main() {
    int N, G;             // 宣告整數變數 N 和 G ，分別用來儲存輸入資料與每次GCD總和
    while (cin >> N, N) { // 接收標準輸入至 N ，如果 N 為 0 則結束迴圈
        G = 0;
        for (int i = 1; i < N; i++) // 按照題目要求，使用雙迴圈給值
            for (int j = i + 1; j <= N; j++) {
                G += GCD(i, j); // 將 i 與 j 傳入 GCD 運算
            }
        cout << G << endl; // 輸出本次運算結果並換行
    }
}

// 功能： 計算 x 與 y 的最大公因數 (GCD)
// 輸入： 傳入整數 x 和 y
// 回傳值：  x 與 y 的最大公因數
int GCD(int x, int y) {
    int tmp;
    if (y > x) { // 如果 y 比 x 大，則先互換
        tmp = y;
        y = x;
        x = tmp;
    }
    while (x != 0) { // 進行輾轉相除法求最大公因數
        x %= y;
        y -= x;
    }
    return y;
}
