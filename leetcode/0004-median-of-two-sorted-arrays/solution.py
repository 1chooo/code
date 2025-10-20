"""
* Author: 1chooo<hugo@1chooo.com>
* Problem: https://leetcode.com/problems/median-of-two-sorted-arrays/
* Runtime: 0ms (100.00%)
"""


class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        if len(nums1) > len(nums2):
            nums1, nums2 = nums2, nums1

        m, n = len(nums1), len(nums2)
        total = m + n
        half = total // 2

        left, right = 0, m - 1

        while True:
            i = (left + right) // 2
            j = half - i - 2

            a_left = nums1[i] if i >= 0 else float("-inf")
            a_right = nums1[i + 1] if (i + 1) < m else float("inf")
            b_left = nums2[j] if j >= 0 else float("-inf")
            b_right = nums2[j + 1] if (j + 1) < n else float("inf")

            if a_left <= b_right and b_left <= a_right:
                if total % 2:
                    return min(a_right, b_right)
                return (max(a_left, b_left) + min(a_right, b_right)) / 2
            elif a_left > b_right:
                right = i - 1
            else:
                left = i + 1
