/*
 * Author: Hugo ChunHo Lin <hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/integer-to-english-words
 * Runtime: 0ms (100.00%)
 */

func numberToWords(num int) string {
    if num == 0 {
		return "Zero"
	}
	return intToString(num)[1:]
}

func intToString(num int) string {
	if num == 0 {
		return ""
	}
	if num < 20 {
		return " " + below20[num]
	}
	if num < 100 {
		return " " + below100[num / 10] + intToString(num % 10)
	}
	if num < 1000 {
		return " " + below20[num / 100] + " Hundred" + intToString(num % 100)
	}
	if num < 1000000 {
		return intToString(num / 1000) + " Thousand" + intToString(num % 1000)
	}
	if num < 1000000000 {
		return intToString(num / 1000000) + " Million" + intToString(num % 1000000)
	}
	return intToString(num / 1000000000) + " Billion" + intToString(num % 1000000000)
}

var below20 = []string{
	"",
	"One",
	"Two",
	"Three",
	"Four",
	"Five",
	"Six",
	"Seven",
	"Eight",
	"Nine",
	"Ten",
	"Eleven",
	"Twelve",
	"Thirteen",
	"Fourteen",
	"Fifteen",
	"Sixteen",
	"Seventeen",
	"Eighteen",
	"Nineteen",
}

var below100 = []string{
	"",
	"",
	"Twenty",
	"Thirty",
	"Forty",
	"Fifty",
	"Sixty",
	"Seventy",
	"Eighty",
	"Ninety",
}
