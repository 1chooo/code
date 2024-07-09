func findTheWinner(n int, k int) int {
    winner := 0
	for i := 2; i <= n; i++ {
		winner = (winner + k) % i
	}

	return winner + 1
}


// josephus problem
func findTheWinner(n int, k int) int {
    if n == 1 {
		return 1
	}

	return (findTheWinner(n - 1, k) + k - 1) % n + 1
}

