func threeConsecutiveOdds(arr []int) bool {
    for i := 2; i < len(arr) - 1; i++ {
		if (arr[i] & 1) == 1 && (arr[i - 1] & 1) == 1 && (arr[i - 2] & 1) == 1 {
			return true
		}
	}
	return false
}
