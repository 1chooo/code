/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1071
 * Status: AC
 */

#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

int main(void) {
    int testCases;

    scanf("%d", &testCases);

    while (testCases--) {
        int numItems;
        scanf("%d", &numItems);

        int weights[1005];
        int prices[1005];

        for (int i = 0; i < numItems; i++) {
            scanf("%d%d", &prices[i], &weights[i]);
        }

        int dp[35];
        memset(dp, 0, sizeof(dp));

        for (int i = 0; i < numItems; i++) {
            for (int j = 30; j >= weights[i]; j--) {
                if (dp[j - weights[i]] + prices[i] > dp[j]) {
                    dp[j] = dp[j - weights[i]] + prices[i];
                }
            }
        }

        int maxWeight;
        int numPeople;
        scanf("%d", &numPeople);

        int totalValue = 0;
        for (int i = 0; i < numPeople; i++) {
            scanf("%d", &maxWeight);
            totalValue += dp[maxWeight];
        }

        printf("%d\n", totalValue);
    }

    return 0;
}
