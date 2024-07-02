# [1550. Three Consecutive Odds](https://leetcode.com/problems/three-consecutive-odds)


Given an integer array `arr`, return `true` if there are three consecutive odd numbers in the array. Otherwise, return `false`.
 

**Example 1:**

- Input: `arr = [2,6,4,1]`
- Output: `false`
- Explanation: `There are no three consecutive odds.`


**Example 2:**

- Input: `arr = [1,2,34,3,4,5,7,23,12]`
- Output: `true`
- Explanation: `[5,7,23] are three consecutive odds.`
 

**Constraints:**

- `1 <= arr.length <= 1000`
- `1 <= arr[i] <= 1000`


### Intuition

We have to check if there are "three consecutive odd numbers" in the array. We can iterate over the array and check if the current number and the two previous numbers are odd. If they are, we return `true`. If we reach the end of the array without finding three consecutive odd numbers, we return `false`.

### Approach

1. Iterate over the array from index `2` to `len(arr)`.
2. Check if the current number and the two previous numbers are odd. (with bitwise `AND` operation)
3. Once we find three consecutive odd numbers, return `true`.
4. If we reach the end of the array without finding three consecutive odd numbers, return `false`.

### Complexity

- Time Complexity: $O(N)$
- Space Complexity: $O(1)$


### Code

```go
func threeConsecutiveOdds(arr []int) bool {
    for i := 2; i < len(arr); i++ {
		if (arr[i] & 1) == 1 && (arr[i - 1] & 1) == 1 && (arr[i - 2] & 1) == 1 {
			return true
		}
	}
	return false
}
```
