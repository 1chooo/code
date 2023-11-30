# 35. Search Insert Position

Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with `O(log n)` runtime complexity.

 
### Example 1:

> Input: `nums = [1,3,5,6], target = 5`  
> Output: `2`


### Example 2:

> Input: `nums = [1,3,5,6], target = 2`  
> Output: `1`

### Example 3:

> Input: `nums = [1,3,5,6], target = 7`  
> Output: `4`
 

### Constraints:

- `1 <= nums.length <= 104`
- `-104 <= nums[i] <= 104`
- `nums` contains **distinct values sorted in ascending order.**
- `-104 <= target <= 104`

#### [Python] Solution.
```python
from typing import List

class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        left, right = 0, len(nums) - 1

        while left <= right:
            middle = (left + right) // 2

            if nums[middle] == target:
                return middle

            if nums[middle] < target:
                left = middle + 1
            else:
                right = middle - 1

        return left
```

#### [C#] Solution.
```csharp
public class Solution {
    public int SearchInsert(int[] nums, int target) {
        int left = 0;
        int right = nums.Length - 1;

        while (left <= right) {
            int middle = left + (right - left) / 2;

            if (nums[middle] == target) {
                return middle;
            }

            if (nums[middle] < target) {
                left = middle + 1;
            }
            else {
                right = middle - 1;
            }
        }

        return left;
    }
}
```