#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T, N, P, num;
    vector<bool> days;

    cin >> T;
    while (T--) {
        cin >> N >> P;
        days.assign(N + 1, false);

        while (P--) {
            cin >> num;
            for (int i = num; i <= N; i += num)
                days[i] = true;
        }

        for (int i = 6; i <= N; i += 7)
            days[i] = days[i + 1] = false;

        int cnt = 0;
        for (int i = 1; i <= N; ++i)
            if (days[i])
                ++cnt;
        cout << cnt << "\n";
    }

    return 0;
}

#include <cstdio>
using namespace std;

int main() {
    int T, N, P, h[101]; // T: number of cases, N: number of days
                         // P: number of parties, h[i]: hartal parameter for party i
    scanf("%d", &T);
    while (T--) {
        scanf("%d%d", &N, &P);
        for (int i = 0; i < P; i++)
            scanf("%d", &h[i]);
        int hartal = 0;
        for (int i = 1; i <= N; i++) {
            if (i % 7 == 6) { // 跳過星期五和星期六
                i++;
                continue;
            }
            for (int j = 0; j < P; j++) {
                if (i % h[j] == 0) {
                    hartal++;
                    break;
                }
            }
        }
        printf("%d\n", hartal);
    }
    return 0;
}

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

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int testCase_num;

    cin >> testCase_num;
    for (int i = 0; i < testCase_num; i++) {
        int simulationDay;
        int politicalParty_num;
        cin >> simulationDay >> politicalParty_num;

        int partyHartal[politicalParty_num];
        vector<int> hartals;
        for (int j = 0; j < politicalParty_num; j++) {
            cin >> partyHartal[j];

            // simulate hartals for all parties
            for (int k = 0; k <= simulationDay; k += partyHartal[j]) {
                if (j != 0) {
                    // repeated hartals and day0 won't push into vector again
                    if (k != 0 && find(hartals.begin(), hartals.end(), k) == hartals.end()) {
                        hartals.push_back(k);
                    }
                } else {
                    if (k != 0) {
                        hartals.push_back(k);
                    }
                }
            }
        }

        sort(hartals.begin(), hartals.end());

        int lostWorkingDay = 0;
        for (int j = 0; j < hartals.size(); j++) {
            // skip Friday and Saturday
            if (hartals[j] % 7 != 6 && hartals[j] % 7 != 0) {
                lostWorkingDay++;
            }
        }
        cout << lostWorkingDay << endl;
    }
    return 0;
}
