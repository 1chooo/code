"""
* Author: 1chooo<hugo@1chooo.com>
* Problem: https://leetcode.com/problems/flood-fill
* Runtime: 0ms (100.00%)
"""

from typing import List


class Solution:
    def floodFill(
        self, image: List[List[int]], sr: int, sc: int, color: int
    ) -> List[List[int]]:
        starting_color = image[sr][sc]
        if starting_color == color:
            return image

        self.dfs(image, sr, sc, starting_color, color)

        return image

    def dfs(self, image, i, j, starting_color, color):
        if (
            i < 0
            or i >= len(image)
            or j < 0
            or j >= len(image[0])
            or image[i][j] != starting_color
        ):
            return
        image[i][j] = color
        self.dfs(image, i + 1, j, starting_color, color)
        self.dfs(image, i - 1, j, starting_color, color)
        self.dfs(image, i, j + 1, starting_color, color)
        self.dfs(image, i, j - 1, starting_color, color)


if __name__ == "__main__":
    solution = Solution()
    solution.floodFill(image=[[1, 1, 1], [1, 1, 0], [1, 0, 1]], sr=1, sc=1, color=2)
