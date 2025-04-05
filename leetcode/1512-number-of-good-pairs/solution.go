/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/number-of-good-pairs/
 * Runtime: 0ms (100.00%)
 */

func numIdenticalPairs(nums []int) int {
	goodPairsNum := 0

	for i := 0; i < len(nums); i++ {
		for j := i + 1; j < len(nums); j++ {
			if nums[j] == nums[i] {
				goodPairsNum++
			}
		}
	}

	return goodPairsNum
}
