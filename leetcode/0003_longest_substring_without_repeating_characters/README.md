# [3. Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/)

Given a string `s`, find the length of the longest substring without repeating characters.

**Example 1:**

- Input: `s = "abcabcbb"`
- Output: `3`
- Explanation: `The answer is "abc", with the length of 3.`


**Example 2:**

- Input: s = `"bbbbb"`
- Output: `1`
- Explanation: `The answer is "b", with the length of 1.`


**Example 3:**

- Input: s = `"pwwkew"`
- Output: `3`
- Explanation: `The answer is "wke", with the length of 3.`

`Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.`

**Constraints:**

- <code>0 <= s.length <= 5 * 10<sup>4</sup></code>
- `s` consists of English letters, digits, symbols and spaces.



https://blog.wu-boy.com/2021/06/what-is-different-between-new-and-make-in-golang/



Sure! Let's go through the Go code step-by-step using the input string "pwwkew":

```go
package main

import (
	"fmt"
)

func lengthOfLongestSubstring(s string) int {
	charMap := make([]bool, 128)

	maxLength := 0
	left := 0

	for i := 0; i < len(s); i++ {
		for charMap[s[i]] {
			charMap[s[left]] = false
			left++
		}
		charMap[s[i]] = true

		if i-left+1 > maxLength {
			maxLength = i-left+1
		}
	}

	return maxLength
}

func main() {
	fmt.Println(lengthOfLongestSubstring("pwwkew")) // Output: 3
}
```

### Step-by-step Execution:

1. **Initialization:**
   - `vis` is a boolean array of size 128 initialized to `false`.
   - `answer` is set to 0.
   - `j` is set to 0.
   - `n` is the length of the string `s`, which is 6 for "pwwkew".

2. **First Iteration (i = 0):**
   - `s[i]` is 'p'.
   - `vis[s[i]]` is `false`, so we don't enter the inner while loop.
   - `vis[s[i]]` is set to `true` for 'p'.
   - Calculate the current length: `i - j + 1 = 0 - 0 + 1 = 1`.
   - Update `answer` to `1`.

3. **Second Iteration (i = 1):**
   - `s[i]` is 'w'.
   - `vis[s[i]]` is `false`, so we don't enter the inner while loop.
   - `vis[s[i]]` is set to `true` for 'w'.
   - Calculate the current length: `i - j + 1 = 1 - 0 + 1 = 2`.
   - Update `answer` to `2`.

4. **Third Iteration (i = 2):**
   - `s[i]` is 'w'.
   - `vis[s[i]]` is `true`, so we enter the inner while loop:
     - Set `vis[s[j]]` to `false` for 'p' and increment `j` to `1`.
     - Set `vis[s[j]]` to `false` for 'w' and increment `j` to `2`.
   - Exit the inner while loop.
   - Set `vis[s[i]]` to `true` for 'w'.
   - Calculate the current length: `i - j + 1 = 2 - 2 + 1 = 1`.
   - `answer` remains `2`.

5. **Fourth Iteration (i = 3):**
   - `s[i]` is 'k'.
   - `vis[s[i]]` is `false`, so we don't enter the inner while loop.
   - `vis[s[i]]` is set to `true` for 'k'.
   - Calculate the current length: `i - j + 1 = 3 - 2 + 1 = 2`.
   - `answer` remains `2`.

6. **Fifth Iteration (i = 4):**
   - `s[i]` is 'e'.
   - `vis[s[i]]` is `false`, so we don't enter the inner while loop.
   - `vis[s[i]]` is set to `true` for 'e'.
   - Calculate the current length: `i - j + 1 = 4 - 2 + 1 = 3`.
   - Update `answer` to `3`.

7. **Sixth Iteration (i = 5):**
   - `s[i]` is 'w'.
   - `vis[s[i]]` is `true`, so we enter the inner while loop:
     - Set `vis[s[j]]` to `false` for 'w' and increment `j` to `3`.
     - Set `vis[s[j]]` to `false` for 'k' and increment `j` to `4`.
   - Exit the inner while loop.
   - Set `vis[s[i]]` to `true` for 'w'.
   - Calculate the current length: `i - j + 1 = 5 - 3 + 1 = 3`.
   - `answer` remains `3`.

8. **End of Loop:**
   - The final value of `answer` is `3`.

Therefore, the length of the longest substring without repeating characters for the input "pwwkew" is `3`.


這是個動態的的視窗，左指標用來檢查是否有重複的字元，右指標往右移動來檢索整個 array ，當發現右指標指到的字元已經存在於視窗中，左指標就要往右移動，直到視窗中的字元不重複出現，舉例目前進入的是 pw，目前都沒有出現其他重複的 char，因此目前記錄到的 char 有 pw，而又出現一個 w，那麼左指標就會從就會從 p 移動到 w，把 p 變成 false，再接著因為 w 還是 true 的，因此左指標會再往右移動，直到 w 變成 false，這樣就可以記錄到目前的最長 substring。

```go
func lengthOfLongestSubstring(s string) int {
	charMap := make([]bool, 128)

	maxLength := 0
	left := 0

	for i := 0; i < len(s); i++ {
		for charMap[s[i]] {
			charMap[s[left]] = false
			left++
		}
		charMap[s[i]] = true

		if i-left+1 > maxLength {
			maxLength = i-left+1
		}
	}

	return maxLength
}
```
