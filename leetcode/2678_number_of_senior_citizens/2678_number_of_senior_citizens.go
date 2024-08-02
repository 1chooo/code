func countSeniors(details []string) int {
    cnt := 0

	for _, detail := range details {
		tensDigit := detail[11]
		unitDigit := detail[12]
		if tensDigit == '6' && unitDigit > '0' || tensDigit > '6' {
			cnt++
		}
	}

	return cnt
}