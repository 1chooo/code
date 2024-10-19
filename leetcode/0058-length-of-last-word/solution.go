/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/length-of-last-word/
 * Runtime: 2ms (5.15%)
 */

func lengthOfLastWord(s string) int {
	words := strings.Fields(s)

	if len(words) > 0 {
		return len(words[len(words)-1])
	}

	return 0
}

/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/length-of-last-word/
 * Runtime: 0ms (100.00%)
 */

func lengthOfLastWord(s string) int {
	splt := strings.Split(s, " ")

	for idx := len(splt) - 1; idx >= 0; idx-- {
		if splt[idx] != " " && splt[idx] != "" {
			return len(splt[idx])
		}
	}
	return 0
}
