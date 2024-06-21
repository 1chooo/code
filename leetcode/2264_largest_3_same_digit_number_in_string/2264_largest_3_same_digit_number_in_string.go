package main

import (
	"fmt"
)

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

func main() {
	// Test cases
	fmt.Println(largestGoodInteger("6777133339")) // Output: "777"
	fmt.Println(largestGoodInteger("2300019"))    // Output: "000"
	fmt.Println(largestGoodInteger("42352338"))   // Output: ""
}
