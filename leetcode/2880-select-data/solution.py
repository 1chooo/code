"""
* Author: 1chooo<hugo970217@gmail.com>
* Problem: https://leetcode.com/problems/select-data
* Runtime: 351ms (85.87%)
"""

import pandas as pd

def selectData(students: pd.DataFrame) -> pd.DataFrame:
    return students.loc[
        students["student_id"] == 101, 
        ["name", "age"]
    ]
