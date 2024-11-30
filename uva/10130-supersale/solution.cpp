/*
 * Author: @1chooo
 * Title: 10130 - SuperSale
 * Required: Time limit: 3.000 seconds
 * Link:
 * Status: AC
 */

#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

int main() {
	int testCases, numItems, numPeople, maxWeight, totalValue;
	int i, j;
	int prices[1005], weights[1005], dp[35];

	scanf("%d", &testCases);

	while (testCases--) {
		scanf("%d", &numItems);
		for (i = 0; i < numItems; i++) {
			scanf("%d%d", &prices[i], &weights[i]);
		}

		memset(dp, 0, sizeof(dp));

		for (i = 0; i < numItems; i++) {
			for (j = 30; j >= weights[i]; j--) {
				if (dp[j - weights[i]] + prices[i] > dp[j]) {
					dp[j] = dp[j - weights[i]] + prices[i];
				}
			}
		}

		totalValue = 0;
		scanf("%d", &numPeople);
		for (i = 0; i < numPeople; i++) {
			scanf("%d", &maxWeight);
			totalValue += dp[maxWeight];
		}

		printf("%d\n", totalValue);
	}

	return 0;
}
