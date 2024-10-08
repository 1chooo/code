func minLength(s string) int {
	stack := []rune{}

	for _, c := range s {
		if len(stack) == 0 {
			stack = append(stack, c)
			continue
		}

		if c == 'B' && stack[len(stack)-1] == 'A' {
			stack = stack[:len(stack)-1]
		} else if c == 'D' && stack[len(stack)-1] == 'C' {
			stack = stack[:len(stack)-1]
		} else {
			stack = append(stack, c)
		}
	}

	return len(stack)
}
