func minDifference(nums []int) int {
    n := len(nums)

	if n <= 4 {
		return 0
	}

	sort.Ints(nums)
	answer := math.MaxInt32
	for i := 0; i <= 3; i++ {
		if answer > nums[n - 4 + i] - nums[i] {
			answer = nums[n - 4 + i] - nums[i]
		}
	}
	return answer
}
