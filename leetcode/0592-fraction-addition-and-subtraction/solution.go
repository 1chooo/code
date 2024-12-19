/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/fraction-addition-and-subtraction
 * Runtime: 0ms (100.00%)
 */

func fractionAddition(expression string) string {
    numerator, denominator := 0, 1
	i, n := 0, len(expression) 

	for i < n {
		sign := 1
		if expression[i] == '+' || expression[i] == '-' {
			if expression[i] == '-' {
				sign = -1
			}
			i++
		}

		num := 0
		for i < n && unicode.IsDigit(rune(expression[i])) {
			num = num * 10 + int(expression[i] - '0')
			i++
		}
		num *= sign

		i++

		den := 0
		for i < n && unicode.IsDigit(rune(expression[i])) {
			den = den * 10 + int(expression[i] - '0')
			i++
		}

		numerator = numerator * den + num * denominator
		denominator *= den

		gcdVal := gcd(abs(numerator), denominator)
		numerator /= gcdVal
		denominator /= gcdVal
	}

	return fmt.Sprintf("%d/%d", numerator, denominator)
}

func gcd(a, b int) int {
	for b != 0 {
		a, b = b, a % b
	}
	return a
}

func abs(x int) int {
	if x < 0 {
		return -x
	}
	return x
}
