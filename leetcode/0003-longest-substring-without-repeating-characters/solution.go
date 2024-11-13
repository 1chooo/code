/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/longest-substring-without-repeating-characters
 * Runtime: 1ms (86.16%)
 */

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
