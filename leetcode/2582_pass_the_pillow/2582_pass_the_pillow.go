func passThePillow(n int, time int) int {
	// n, n-1, ..., 2
    if ((time / (n - 1)) & 1) != 0 {
		return n - time % (n - 1)
	}
	// 1, 2, ..., n-1
	return time % (n - 1) + 1
}

