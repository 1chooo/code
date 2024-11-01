func reverseParentheses(s string) string {
	cur := 0
	stk := []int{}

	runes := []rune(s)
	for i := 0; i < len(runes); i++ {
		if runes[i] == '(' {
			stk = append(stk, cur)
		} else if runes[i] == ')' {
			start := stk[len(stk)-1]
			stk = stk[:len(stk)-1]
			reverse(runes[start:cur])
		} else {
			runes[cur] = runes[i]
			cur++
		}
	}

	return string(runes[:cur])
}

func reverse(runes []rune) {
	for i, j := 0, len(runes) - 1; i < j; i, j = i + 1, j - 1 {
		runes[i], runes[j] = runes[j], runes[i]
	}
}
