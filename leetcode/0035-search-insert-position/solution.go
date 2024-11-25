/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/search-insert-position/
 * Runtime: 0ms (100.00%)
 */

func searchInsert(nums []int, target int) int {
    left, right := 0, len(nums)-1

    for left <= right {
        middle := (left + right) / 2

        if nums[middle] == target {
            return middle
        }

        if nums[middle] < target {
            left = middle + 1
        } else {
            right = middle - 1
        }
    }

    return left
}
