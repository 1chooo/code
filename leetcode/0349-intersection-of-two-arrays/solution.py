"""
* Author: Lin Hugo <hugo@1chooo.com>
* Problem: https://leetcode.com/problems/intersection-of-two-arrays
* Runtime: 0ms (100.00%)
"""

from typing import List


class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        nums1.sort()
        nums2.sort()

        res = []
        i = 0
        j = 0
        checked = None  # We set None is to handle the case where nums may contain 0

        while i < len(nums1) and j < len(nums2):
            if nums1[i] > nums2[j]:
                j += 1
            elif nums1[i] < nums2[j]:
                i += 1
            else:
                if nums1[i] != checked:
                    res.append(nums1[i])
                    checked = nums1[i]
                i += 1
                j += 1

        return res
