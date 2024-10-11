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
