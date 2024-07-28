func canAliceWin(nums []int) bool {
	singleDigitNums := []int{}
	doubleDigitNums := []int{}

	for _, num := range nums {
		if num < 10 {
			singleDigitNums = append(singleDigitNums, num)
		} else {
			doubleDigitNums = append(doubleDigitNums, num)
		}
	}

	sumSingleDigits := 0
	sumDoubleDigits := 0

	for _, num := range singleDigitNums {
		sumSingleDigits += num
	}

	for _, num := range doubleDigitNums {
		sumDoubleDigits += num
	}

	if sumSingleDigits > sumDoubleDigits || sumDoubleDigits > sumSingleDigits {
		return true
	}

	return false
}
