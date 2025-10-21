"""
* Author: 1chooo<hugo@1chooo.com>
* Problem: https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree
* Runtime: 0ms (100.00%)
"""


# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sortedArrayToBST(self, nums: List[int]) -> Optional[TreeNode]:
        def build(left: int, right: int) -> Optional[TreeNode]:
            if left >= right:
                return None

            mid = (left + right) // 2

            node = TreeNode(nums[mid])

            node.left = build(left, mid)
            node.right = build(mid + 1, right)

            return node

        return build(0, len(nums))
