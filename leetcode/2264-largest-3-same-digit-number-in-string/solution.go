// Author: Lin Hugo<hugo@1chooo.com>
// Problem: https://leetcode.com/problems/largest-3-same-digit-number-in-string
// Runtime: 0ms (100.00%)

func largestGoodInteger(num string) string {
	maxGood := ""
	for i := 0; i < len(num)-2; i++ {
		if num[i] == num[i+1] && num[i] == num[i+2] {
			substr := num[i : i+3]
			if substr > maxGood {
				maxGood = substr
			}
		}
	}
	return maxGood
}
