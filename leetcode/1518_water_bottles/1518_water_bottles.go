// recursive (fatest, 0ms)
func numWaterBottles(numBottles int, numExchange int) int {
	if numBottles < numExchange {
		return numBottles
	}
	return numExchange + numWaterBottles(numBottles - numExchange + 1, numExchange);
}


// math formula
func numWaterBottles(numBottles int, numExchange int) int {
    return numBottles + (numBottles - 1) / (numExchange - 1)
}


// iterative
func numWaterBottles(numBottles int, numExchange int) int {
	empty := 0
	sum := 0
	for numBottles != 0 {
		sum += numBottles
		empty += numBottles
		numBottles = empty / numExchange
		empty %= numExchange
	}
	return sum
}
