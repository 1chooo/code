/**
 * Author: Hugo ChunHo Lin
 * Problem: https://leetcode.com/problems/running-sum-of-1d-array/
 * Runtime: 0ms
 */

func runningSum(nums []int) []int {
    tmp := 0
	sum := make([]int, len(nums))

	for i := 0; i < len(nums); i++ {
		tmp += nums[i]
		sum[i] = tmp
	}

	return sum
}
