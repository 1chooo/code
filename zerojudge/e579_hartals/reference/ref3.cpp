#include <iostream>
using namespace std;

int main() {
    int i, n, p, t, j;

    cin >> t; // 輸入測資數量
    while (t--) {
        cin >> n >> p; // 輸入天數和黨數
        int day[n + 1] = {0}, hi = 0, h[p] = {0};

        for (i = 0; i < p; i++) {
            cin >> h[i];        // 輸入罷會參數
            int fr = 6, sa = 7; // 星期五和六要休息

            for (j = 1; j < n + 1; j++) // 從第一天開始判斷是否罷會
            {
                if (j % h[i] == 0 && ((j != fr) && (j != sa))) // 判斷是否罷會
                {
                    day[j]++;
                }

                else if (j == fr) // 算下禮拜五是第幾天
                {
                    fr = fr + 7;
                }

                else if (j == sa) // 算下禮拜六是第幾天
                {
                    sa = sa + 7;
                }
            }
        }

        for (i = 1; i < n + 1; i++) {
            if (day[i] > 0) // 如果那天有罷會就算一次
            {
                hi++;
            }
        }

        cout << hi << endl; // 輸出最終罷會幾天
    }
    return 0;
}