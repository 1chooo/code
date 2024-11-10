# [3097. Shortest Subarray With OR at Least K II](https://leetcode.com/problems/shortest-subarray-with-or-at-least-k-ii)

You are given an array `nums` of non-negative integers and an integer `k`.

An array is called special if the bitwise `OR` of all of its elements is at least `k`.

Return the length of the shortest special non-empty 
subarray[^1] of `nums`, or return `-1` if no special subarray exists.

[^1]: A subarray is a contiguous non-empty sequence of elements within an array.


### Example 1:

- Input: `nums = [1,2,3], k = 2`
- Output: `1`
- Explanation: `The subarray [3] has OR value of 3. Hence, we return 1.`

### Example 2:

- Input: `nums = [2,1,8], k = 10`
- Output: `3`
- Explanation: `The subarray [2,1,8] has OR value of 11. Hence, we return 3.`

### Example 3:

- Input: `nums = [1,2], k = 0`
- Output: `1`
- Explanation: `The subarray [1] has OR value of 1. Hence, we return 1.`

### Constraints:

- <code>1 <= nums.length <= 2 * 10<sup>5</sup></code>
- <code>0 <= nums[i] <= 10<sup>9</sup></code>
- <code>0 <= k <= 10<sup>9</sup></code>

[1] Bitset+Freq+Sliding window||4ms Beats 100%: https://leetcode.com/problems/shortest-subarray-with-or-at-least-k-ii/solutions/6028302/bitset-freq-sliding-window-4ms-beats-100/

```cpp
for (int l, r = 0; r < n; r++) {
    do_something_by_adding(nums[r]);
    while (check_condition(k)) {
        update_the_answer();
        do_something_by_removing(nums[l]);
        l++;
    }
}
```