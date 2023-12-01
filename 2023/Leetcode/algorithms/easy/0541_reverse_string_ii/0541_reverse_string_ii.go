package main

import (
	"fmt"
)

func reverseStr(s string, k int) string {
	sList := []rune(s) // Convert the string into a list of runes (Unicode characters)
	
	for i := 0; i < len(sList); i += 2*k {
		end := i + k
		if end > len(sList) {
			end = len(sList)
		}
		
		// Reverse the first k characters within each 2k block
		reverseSubstring(&sList, i, end)
	}
	
	// Convert the modified list back to a string
	return string(sList)
}

func reverseSubstring(s *[]rune, start, end int) {
	for start < end {
		(*s)[start], (*s)[end-1] = (*s)[end-1], (*s)[start]
		start++
		end--
	}
}

func main() {
	fmt.Println(reverseStr("abcdefg", 2)) // Output: "bacdfeg"
	fmt.Println(reverseStr("abcd", 2))   // Output: "bacd"
}
