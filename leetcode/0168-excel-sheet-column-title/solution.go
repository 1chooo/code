/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/excel-sheet-column-title
 * Runtime: 0ms (100.00%)
 */

func convertToTitle(columnNumber int) string {
    alpha := "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    var result string

    for columnNumber > 0 {
        if columnNumber%26 == 0 {
            result += "Z"
            columnNumber = columnNumber/26 - 1
        } else {
            result += string(alpha[(columnNumber%26)-1])
            columnNumber /= 26
        }
    }

    return reverseString(result)
}

// Function to reverse a string
func reverseString(s string) string {
    runes := []rune(s)
    for i, j := 0, len(runes)-1; i < j; i, j = i+1, j-1 {
        runes[i], runes[j] = runes[j], runes[i]
    }
    return string(runes)
}
