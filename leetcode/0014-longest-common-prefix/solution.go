/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/longest-common-prefix/
 * Runtime: 0ms (100.00%)
 */

func longestCommonPrefix(strs []string) string {
    if len(strs) == 0 {
        return ""
    }

    prefix := strs[0] // Initialize the prefix as the first string

    for i := 1; i < len(strs); i++ {
        for strings.Index(strs[i], prefix) != 0 {
            prefix = prefix[:len(prefix)-1] // Reduce the prefix by one character
            if len(prefix) == 0 {
                return ""
            }
        }
    }

    return prefix
}
