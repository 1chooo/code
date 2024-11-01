func maximumGain(s string, x, y int) int {
	aCount := 0
	bCount := 0
	lesser := min(x, y)
	result := 0

	for _, c := range s {
		if c > 'b' {
			result += min(aCount, bCount) * lesser
			aCount = 0
			bCount = 0
		} else if c == 'a' {
			if x < y && bCount > 0 {
				bCount--
				result += y
			} else {
				aCount++
			}
		} else {
			if x > y && aCount > 0 {
				aCount--
				result += x
			} else {
				bCount++
			}
		}
	}

	result += min(aCount, bCount) * lesser
	return result
}

func min(a, b int) int {
	if a < b {
		return a
	}
	return b
}
