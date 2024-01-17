# [27. Remove Element](https://leetcode.com/problems/remove-element/)

Given an integer array `nums` and an integer `val`, remove all occurrences of `val` in `nums` [in-place](https://en.wikipedia.org/wiki/In-place_algorithm). The order of the elements may be changed. Then return the number of elements in `nums` which are not equal to `val`.

Consider the number of elements in `nums` which are not equal to `val` be `k`, to get accepted, you need to do the following things:

- Change the array `nums` such that the first `k` elements of `nums` contain the elements which are not equal to `val`. The remaining elements of `nums` are not important as well as the size of `nums`.
- Return `k`.

**Custom Judge:**

The judge will test your solution with the following code:
```
int[] nums = [...]; // Input array
int val = ...; // Value to remove
int[] expectedNums = [...]; // The expected answer with correct length.
                            // It is sorted with no values equaling val.

int k = removeElement(num, val); // Calls your implementation

assert k == expectedNums.length;
sort(nums, 0, k); // Sort the first k elements of `nums`
for (int i = 0; i < actualLength; i++) {
    assert nums[i] == expectedNums[i];
}
```

If all assertions pass, then your solution will be **accepted**.


**Example 1:**

> Input: `nums = [3,2,2,3], val = 3`  
> Output: `2, nums = [2,2,_,_]`  
> Explanation: `Your function should return k = 2, with the first two elements of nums being 2.`  
> `It does not matter what you leave beyond the returned k (hence they are underscores).`

**Example 2:**

> Input: `nums = [0,1,2,2,3,0,4,2], val = 2`  
> Output: `5, nums = [0,1,4,0,3,_,_,_]`  
> Explanation: `Your function should return k = 5, with the first five elements of nums containing 0, 0, 1, 3, and 4.`  
> `Note that the five elements can be returned in any order.`  
> `It does not matter what you leave beyond the returned k (hence they are underscores).`
 

**Constraints:**

- `0 <= `nums`.length <= 100`
- `0 <= `nums`[i] <= 50`
- `0 <= `val` <= 100`


這個問題要求移除給定整數陣列 `nums` 中所有與指定數字 `val` 相等的元素，並返回修改後的陣列長度。在此問題中，可以使用雙指針法來解決。假設有兩個指針，一個指針（`k`）用於追踪不等於 `val` 的元素的位置，另一個指針用於遍歷整個陣列。當遍歷指針所指向的元素不等於 `val` 時，將這個元素放置到 `k` 指針所在位置，然後將兩個指針都向前移動一步。重複這個過程直到整個陣列被遍歷完畢。最後，返回 `k` 指針的位置，即為新陣列的長度。這樣做可以在原地修改陣列，並確保前 `k` 個元素為不等於 `val` 的元素，後面的元素則可以忽略不計。