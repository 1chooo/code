// method 1
func minimumDeletions(s string) int {
    delCount := 0
	bCount := 0

	for i := 0; i < len(s); i++ {
		if s[i] == 'a' {
			delCount++
		} else {
			bCount++
		}
		if bCount < delCount {
			delCount = bCount
		}
	}

	return delCount
}


// method 2
func minimumDeletions(s string) int {
    delCount := 0
	aCount := 0
	for i := len(s) - 1; i >= 0; i-- {
		if s[i] == 'b' {
			delCount++
		} else {
			aCount++
		}
		if aCount < delCount {
			delCount = aCount
		}
	}

	return delCount
}

// method 3: DP Solution
func min(a, b int) int {
	if a < b {
		return a
	}
	return b
}

func minimumDeletions(s string) int {
	delCount := 0
	aCount := 0
	for i := len(s) - 1; i >= 0; i-- {
		if s[i] == 'a' {
			aCount++
		} else {
			delCount = min(delCount+1, aCount)
		}
	}

	return delCount
}


// method 4
func minimumDeletions(s string) int {
	delCount := 0
	bCount := 0

	for _, char := range s { 
		if char == 'b' {
			bCount++
		} else if bCount > 0 { 
			delCount++
			bCount--
		}
	}

	return delCount
}


