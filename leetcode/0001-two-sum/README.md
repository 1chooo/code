# [1. Two Sum](https://leetcode.com/problems/two-sum)

##### Tags: `Easy`, <code>O(n<sup>2</sup>)</code>

Given an array of integers `nums` and an integer `target`, *return indices of the two numbers such that they add up to `target`*.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

**Example 1:**
- Input: `nums = [2,7,11,15], target = 9`
- Output: `[0,1]`
- Explanation: `Because nums[0] + nums[1] == 9, we return [0, 1].`

**Example 2:**
- Input: `nums = [3,2,4], target = 6`
- Output: `[1,2]`

**Example 3:**
- Input: `nums = [3,3], target = 6`
- Output: `[0,1]`

**Constraints:**

- <code>2 <= nums.length <= 10<sup>4</sup></code>
- <code>-10<sup>9</sup> <= nums[i] <= 10<sup>9</sup></code>
- <code>-10<sup>9</sup> <= target <= 10<sup>9</sup></code>
- <code>Only one valid answer exists.</code>

**Follow-up:** Can you come up with an algorithm that is less than <code>O(n<sup>2</sup>)</code> time complexity?
> [!NOTE]
> - How to use vector?
> - How to use Hash Map?

-----
在這段代碼中，其實已經是一個相當高效的解法，使用了哈希表來實現O(n)的時間複雜度。唯一可以優化的地方是代碼的可讀性和結構。以下是一些改進建議，使代碼更加簡潔且避免無意間修改 `i` 變量：

1. 使用更簡潔的變量命名。
2. 移除不必要的特例處理（在這種情況下，`len(nums) == 2` 的情況不需要特別處理，因為通用算法可以涵蓋這個情況）。

以下是改進後的版本：

```go
func twoSum(nums []int, target int) []int {
    numMap := make(map[int]int)

    for i, num := range nums {
        if j, found := numMap[num]; found {
            return []int{j, i}
        }
        numMap[target - num] = i
    }

    return nil // 如果沒有找到匹配的數對，返回nil
}
```

### 解釋
- 使用 `range` 迴圈更簡潔地遍歷 `nums` 數組，同時取得索引 `i` 和對應的值 `num`。
- 檢查 `numMap` 中是否存在當前數字 `num`，如果存在，說明已經找到一對數字，其索引分別為 `j` 和 `i`，並返回這對索引。
- 如果不存在，則將目標差值 `target - num` 和其索引 `i` 存入 `numMap` 中。
- 若遍歷結束後仍未找到匹配的數對，則返回 `nil`。

這樣的寫法更簡潔，而且避免了在迴圈中誤修改索引 `i` 的風險。



當 `nums = [2, 7, 11, 15]` 且 `target = 9` 時，讓我們一步一步地模擬這段代碼的執行過程：

### 初始化
```go
numMap := make(map[int]int)
```
- 創建了一個空的哈希表 `numMap`。

### 第一輪迭代 (i = 0)
```go
for i, num := range nums {
    // 第一輪: i = 0, num = 2
    if j, found := numMap[num]; found {
        return []int{j, i}
    }
    numMap[target - num] = i
}
```
- `num` 的值是 `2`，索引 `i` 是 `0`。
- 檢查 `numMap` 中是否存在 `num` (`2`)。此時 `numMap` 是空的，所以 `found` 是 `false`。
- `numMap` 中新增一對鍵值：`7: 0`（因為 `target - num` 是 `9 - 2 = 7`）。

現在 `numMap` 是 `{7: 0}`。

### 第二輪迭代 (i = 1)
```go
// 第二輪: i = 1, num = 7
if j, found := numMap[num]; found {
    return []int{j, i}
}
numMap[target - num] = i
```
- `num` 的值是 `7`，索引 `i` 是 `1`。
- 檢查 `numMap` 中是否存在 `num` (`7`)。此時 `numMap` 是 `{7: 0}`，所以 `found` 是 `true`，並且 `j` 是 `0`。
- 返回 `[j, i]`，即 `[0, 1]`。

函數在這一步返回 `[0, 1]`，因為在 `nums` 中，`nums[0] + nums[1]` 等於 `9`。

### 結果
- `twoSum(nums, target)` 返回 `[0, 1]`，這表示 `nums` 中第 `0` 和第 `1` 個元素的和等於 `target`。

### 總結
模擬過程中可以看到，函數在第二輪迭代中找到目標數對並返回結果，這樣的寫法高效且清晰。

-----
## Python Solution  
>解法:  
 暴力解 -- 使用巢狀迴圈，time complexity 為 O(n<sup>2</sup>)  
 雜湊表 -- 用字典建立雜湊表，time complexity 為 O(1)

### 學習重點:
1. 字典函式使用
2. 雜湊觀念複習

### 字典函式使用

```
for i in range(n):
    complement = target - nums[i]
    if complement in numDict:
        return [numDict[complement], i]
    else: 
        numDict[nums[i]] = i
return []
```
- 如果補數在`numDict`中，則回傳答案索引；  
- 如果補數不在`numDict`中，則以`nums[i]`為 key，`i`為 value，存入`numDict`


字典中不支持直接以值找鍵，原因: 時間複雜度，值不唯一。  

>[!NOTE]
>**以鍵找值:**   
>`Dict[key] = value_to_the_key`，time complexity: O(1)      
>**以值找鍵:**   
>透過迴圈遍歷整張表搜尋，或者以迴圈做reversed dictionsry，無論何種的 time complexity: O(n)


### 雜湊觀念複習
在Python中，通常使用Dict實現雜湊，因為效率高，解決碰撞的方式穩定且較為動態。
 
1. **存儲方式:**    
將 key 轉換為 hash value，對應到字典中的slot (單層字典中 slot 跟 bucket 概念相似；雙層字典中 bucket 中存儲 slot，slot中才有key-value pair)  

2. **面對collision**   
    1. chaining : 直接在bucket中新增slot，但是會占用額外的記憶體空間。
    2. open addressing : 
        1. 線性探測(往下一個 slot 檢查)
        2. 二次探測(用二次方的方式往下個 slot 檢查)
        3. 雙重雜湊(直接換一個 hash function 計算)