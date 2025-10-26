"""
* Author: Lin Hugo<hugo@1chooo.com>
* Problem: https://leetcode.com/problems/diameter-of-binary-tree
* Runtime: 6ms (53.00%)
"""


# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        diameter = 0

        def dfs(root: Optional[TreeNode]) -> int:
            nonlocal diameter
            if not root:
                return 0

            left = dfs(root.left)
            right = dfs(root.right)

            diameter = max(diameter, left + right)
            return 1 + max(left, right)

        dfs(root)
        return diameter


"""
* Author: Lin Hugo<hugo@1chooo.com>
* Problem: https://leetcode.com/problems/diameter-of-binary-tree
* Runtime: 6ms (53.00%)
"""


# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution2:
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        diameter = [0]

        def dfs(root: Optional[TreeNode]) -> int:
            if not root:
                return 0

            left = dfs(root.left)
            right = dfs(root.right)

            diameter[0] = max(diameter[0], left + right)
            return 1 + max(left, right)

        dfs(root)
        return diameter[0]
