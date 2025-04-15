/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/intersection-of-two-arrays-ii/
 * Runtime: 0ms (100.00%)
 */

func intersect(nums1 []int, nums2 []int) []int {
    m := make(map[int]int)
    for _, num := range nums1 {
        m[num]++
    }
    var res []int
    for _, num := range nums2 {
        if m[num] > 0 {
            res = append(res, num)
            m[num]--
        }
    }
    return res
}
