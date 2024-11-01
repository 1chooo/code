package main

import (
	"fmt"
)

func countWaysToColorHouses(n int) int {
	const MOD = 1000000007
	// Initialize the DP table to store the number of ways to paint
	// the houses up to index i with color j
	dp := make([][3]int, n+1)

	// Base case: when there's only one house
	for j := 0; j < 3; j++ {
		dp[1][j] = 1
	}

	// Dynamic programming to fill the DP table
	for i := 2; i <= n; i++ {
		for j := 0; j < 3; j++ {
			// Initialize the count for the current house with color j
			dp[i][j] = 0
			for k := 0; k < 3; k++ {
				// Skip if the previous house has the same color
				if j == k {
					continue
				}
				// Otherwise, update the count of ways to paint the current house
				dp[i][j] = (dp[i][j] + dp[i-1][k]) % MOD
			}
		}
	}

	// Sum up the counts for all colors at the last house
	total := 0
	for j := 0; j < 3; j++ {
		total = (total + dp[n][j]) % MOD
	}

	return total
}

func main() {
	var n int
	fmt.Scan(&n)
	fmt.Println(countWaysToColorHouses(n))
}
