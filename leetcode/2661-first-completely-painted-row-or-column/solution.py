"""
* Author: 1chooo<hugo970217@gmail.com>
* Problem: https://leetcode.com/problems/first-completely-painted-row-or-column
* Runtime: 119ms (67.19%)
"""

class Solution:
    def firstCompleteIndex(self, arr: List[int], mat: List[List[int]]) -> int:
        row: int = len(mat)
        col: int = len(mat[0])
        position_map: Dict[int, Tuple[int, int]] = {}
        for i in range(row):
            for j in range(col):
                position_map[mat[i][j]] = (i, j)

        row_count: List[int] = [col] * row
        col_count: List[int] = [row] * col

        for i, val in enumerate(arr):
            row, col = position_map[val]
            row_count[row] -= 1
            col_count[col] -= 1
            if row_count[row] == 0 or col_count[col] == 0:
                return i
            
        return -1


class Solution:
    def firstCompleteIndex(self, arr: List[int], mat: List[List[int]]) -> int:
        rows, cols = len(mat), len(mat[0])
        position_map = {mat[r][c]: (r, c) for r in range(rows) for c in range(cols)}
        row_count = [cols] * rows
        col_count = [rows] * cols
        for idx, val in enumerate(arr):
            row, col = position_map[val]
            row_count[row] -= 1
            col_count[col] -= 1
            if row_count[row] == 0 or col_count[col] == 0:
                return idx
        return -1