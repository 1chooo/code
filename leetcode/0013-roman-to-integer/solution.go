/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/roman-to-integer/
 * Runtime: 0ms (100.00%)
 */

func romanToInt(s string) int {
    romanDict := map[byte]int{
        'I': 1,
        'V': 5,
        'X': 10,
        'L': 50,
        'C': 100,
        'D': 500,
        'M': 1000,
    }

    result := 0
    prevValue := 0

    for i := 0; i < len(s); i++ {
        currentValue := romanDict[s[i]]
        result += currentValue

        if prevValue < currentValue {
            result -= 2 * prevValue
        }

        prevValue = currentValue
    }

    return result
}
