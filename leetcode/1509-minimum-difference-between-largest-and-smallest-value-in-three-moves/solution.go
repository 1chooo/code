// Author: Lin Hugo<hugo@1chooo.com>
// Problem: https://leetcode.com/problems/minimum-difference-between-largest-and-smallest-value-in-three-moves
// Runtime: 15ms (72.73%)

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
