/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/two-sum/
 * Runtime: 0ms (100.00%)
 */

func twoSum(nums []int, target int) []int {
    hashMap := make(map[int]int)

    for i, num := range nums {
        if j, ok := hashMap[num]; ok {
            return []int{j, i}
        }
        hashMap[target - num] = i
    }

    return []int{}
}
