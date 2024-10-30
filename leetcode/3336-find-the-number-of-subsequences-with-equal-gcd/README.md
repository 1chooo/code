# [3336. Find the Number of Subsequences With Equal GCD](https://leetcode.com/problems/find-the-number-of-subsequences-with-equal-gcd)

You are given an integer array `nums`.

Your task is to find the number of pairs of non-empty 
subsequences[^1] `(seq1, seq2)` of `nums` that satisfy the following conditions:

[^1]: Subsequence: A subsequence is an array that can be derived from another array by deleting some or no elements without changing the order of the remaining elements.

- The subsequences `seq1` and `seq2` are disjoint, meaning no index of `nums` is common between them.
- The GCD of the elements of `seq1` is equal to the GCD of the elements of `seq2`.

Return the total number of such pairs.

Since the answer may be very large, return it modulo <code>10<sup>9</sup> + 7</code>.

### Example 1:

- Input: `nums = [1,2,3,4]`
- Output: `10`
- Explanation: `The subsequence pairs which have the GCD of their elements equal to 1 are:`
  - <code>([<u>1</u>, 2, 3, 4], [1, <u>2</u>, <u>3</u>, 4])</code>
  - <code>([<u>1</u>, 2, 3, 4], [1, <u>2</u>, <u>3</u>, <u>4</u>])</code>
  - <code>([<u>1</u>, 2, 3, 4], [1, <u>2</u>, <u>3</u>, <u>4</u>])</code>
  - <code>([<u>1</u>, 2, 3, 4], [1, <u>2</u>, <u>3</u>, <u>4</u>])</code>
  - <code>([<u>1</u>, 2, 3, 4], [1, <u>2</u>, <u>3</u>, 4])</code>
  - <code>([1, <u>2</u>, <u>3</u>, 4], [<u>1</u>, 2, 3, 4])</code>
  - <code>([1, <u>2</u>, <u>3</u>, 4], [<u>1</u>, 2, 3, <u>4</u>])</code>
  - <code>([1, <u>2</u>, <u>3</u>, <u>4</u>], [<u>1</u>, 2, 3, 4])</code>
  - <code>([1, 2, <u>3</u>, <u>4</u>], [<u>1</u>, 2, 3, 4])</code>
  - <code>([1, 2, <u>3</u>, <u>4</u>], [<u>1</u>, <u>2</u>, 3, 4])</code>

### Example 2:

- Input: `nums = [10,20,30]`
- Output: `2`
- Explanation: `The subsequence pairs which have the GCD of their elements equal to 10 are:`
  - <code>([<u>10</u>, 20, 30], [10, <u>20</u>, <u>30</u>])</code>
  - <code>([10, <u>20</u>, <u>30</u>], [<u>10</u>, 20, 30])</code>

### Example 3:

- Input: `nums = [1,1,1,1]`
- Output: `50`

### Constraints:

- `1 <= nums.length <= 200`
- `1 <= nums[i] <= 200`
