# [1480. Running Sum of 1d Array](https://leetcode.com/problems/running-sum-of-1d-array)

Given an array `nums`. We define a running sum of an array as `runningSum[i] = sum(nums[0]...nums[i])`.

Return the running sum of `nums`.

**Example 1:**

- Input: nums = `[1,2,3,4]`
- Output: `[1,3,6,10]`
- Explanation: `Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].`

**Example 2:**

- Input: nums = `[1,1,1,1,1]`
- Output: `[1,2,3,4,5]`
- Explanation: `Running sum is obtained as follows: [1, 1+1, 1+1+1, 1+1+1+1, 1+1+1+1+1].`

**Example 3:**

- Input: `nums = [3,1,2,10,1]`
- Output: `[3,4,6,16,17]`
 

**Constraints:**

- <code>1 <= nums.length <= 1000</code>
- <code>-10<sup>6</sup> <= nums[i] <= 10<sup>6</sup></code>


### Intuition

We utilize the concept of `Prefix Sum` to solve this problem. We need a variable to store the running sum of the array. We iterate over the input array `nums` and calculate the running sum. We store the running sum in a new array and return it.


### Approach

1. Initialize a variable `tmp` to store the sum of the array.
2. Create a new array `sum` with the same length as the input array.
3. Iterate over the input array `nums` and calculate the running `sum`.
4. Store the running `sum` in the `sum` array.
5. Return the `sum` array.

### Complexity

- Time Complexity: $O(N)$
- Space Complexity: $O(N)$


### Code

```go
func runningSum(nums []int) []int {
    tmp := 0
	sum := make([]int, len(nums))

	for i := 0; i < len(nums); i++ {
		tmp += nums[i]
		sum[i] = tmp
	}

	return sum
}
```
