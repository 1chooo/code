/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/find-the-winner-of-the-circular-game
 * Runtime: 0ms (100.00%)
 */

func findTheWinner(n int, k int) int {
    winner := 0
	for i := 2; i <= n; i++ {
		winner = (winner + k) % i
	}

	return winner + 1
}

/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/find-the-winner-of-the-circular-game
 * Runtime: 0ms (100.00%)
 * Solution: josephus problem
 */

func findTheWinner(n int, k int) int {
    if n == 1 {
		return 1
	}

	return (findTheWinner(n - 1, k) + k - 1) % n + 1
}

