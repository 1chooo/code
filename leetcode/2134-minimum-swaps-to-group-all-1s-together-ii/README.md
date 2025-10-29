## [2134. Minimum Swaps to Group All 1's Together II](https://leetcode.com/problems/minimum-swaps-to-group-all-1s-together-ii/)
<p>A <strong>swap</strong> is defined as taking two <strong>distinct</strong> positions in an array and swapping the values in them.</p>

<p>A <strong>circular</strong> array is defined as an array where we consider the <strong>first</strong> element and the <strong>last</strong> element to be <strong>adjacent</strong>.</p>

<p>Given a <strong>binary</strong> <strong>circular</strong> array <code>nums</code>, return <em>the minimum number of swaps required to group all </em><code>1</code><em>&#39;s present in the array together at <strong>any location</strong></em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [0,1,0,1,1,0,0]
<strong>Output:</strong> 1
<strong>Explanation:</strong> Here are a few of the ways to group all the 1&#39;s together:
[0,<u>0</u>,<u>1</u>,1,1,0,0] using 1 swap.
[0,1,<u>1</u>,1,<u>0</u>,0,0] using 1 swap.
[1,1,0,0,0,0,1] using 2 swaps (using the circular property of the array).
There is no way to group all 1&#39;s together with 0 swaps.
Thus, the minimum number of swaps required is 1.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [0,1,1,1,0,0,1,1,0]
<strong>Output:</strong> 2
<strong>Explanation:</strong> Here are a few of the ways to group all the 1&#39;s together:
[1,1,1,0,0,0,0,1,1] using 2 swaps (using the circular property of the array).
[1,1,1,1,1,0,0,0,0] using 2 swaps.
There is no way to group all 1&#39;s together with 0 or 1 swaps.
Thus, the minimum number of swaps required is 2.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> nums = [1,1,0,0,1]
<strong>Output:</strong> 0
<strong>Explanation:</strong> All the 1&#39;s are already grouped together due to the circular property of the array.
Thus, the minimum number of swaps required is 0.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code>nums[i]</code> is either <code>0</code> or <code>1</code>.</li>
</ul>


## Hints
1. Notice that the number of 1’s to be grouped together is fixed. It is the number of 1's the whole array has.
2. Call this number total. We should then check for every subarray of size total (possibly wrapped around), how many swaps are required to have the subarray be all 1’s.
3. The number of swaps required is the number of 0’s in the subarray.
4. To eliminate the circular property of the array, we can append the original array to itself. Then, we check each subarray of length total.
5. How do we avoid recounting the number of 0’s in the subarray each time? The Sliding Window technique can help.
