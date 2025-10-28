// Author: Lin Hugo<hugo@1chooo.com>
// Problem: https://leetcode.com/problems/filling-bookcase-shelves
// Runtime: 0ms (100.00%)

func min(a, b int) int {
	if a < b {
		return a
	}
	return b
}

func max(a, b int) int {
	if a > b {
		return a
	}
	return b
}

func minHeightShelves(books [][]int, shelfWidth int) int {
    n := len(books)
	dp := make([]int, n + 1)
	dp[0] = 0
	for i := 1; i <= n; i++ {
		w, h := books[i - 1][0], books[i - 1][1]
		dp[i] = dp[i - 1] + h
		for j := i - 1; j > 0; j-- {
			w += books[j - 1][0]
			if w > shelfWidth {
				break
			}
			h = max(h, books[j - 1][1])
			dp[i] = min(dp[i], dp[j - 1] + h)
		}
	}
	return dp[n]
}
