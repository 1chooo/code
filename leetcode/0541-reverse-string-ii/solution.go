/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/reverse-string-ii/
 * Runtime: 1ms (40.00%)
 */

func reverseStr(s string, k int) string {
	sList := []rune(s)

	for i := 0; i < len(sList); i += 2 * k {
		end := i + k
		if end > len(sList) {
			end = len(sList)
		}

		reverseSubstring(&sList, i, end)
	}

	return string(sList)
}

func reverseSubstring(s *[]rune, start, end int) {
	for start < end {
		(*s)[start], (*s)[end-1] = (*s)[end-1], (*s)[start]
		start++
		end--
	}
}
