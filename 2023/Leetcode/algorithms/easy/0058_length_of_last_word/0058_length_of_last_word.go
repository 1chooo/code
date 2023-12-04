package main

import (
	"fmt"
	"strings"
)

func lengthOfLastWord(s string) int {
	// Split the string by spaces
	words := strings.Fields(s)

	// Check if there are any words after splitting
	if len(words) > 0 {
		// Get the length of the last word in the slice
		return len(words[len(words)-1])
	}

	return 0 // If no words found, return 0
}

func main() {
	// Example usage:
	input1 := "Hello World"
	fmt.Printf("Length of last word in \"%s\": %d\n", input1, lengthOfLastWord(input1))

	input2 := "   fly me   to   the moon  "
	fmt.Printf("Length of last word in \"%s\": %d\n", input2, lengthOfLastWord(input2))

	input3 := "luffy is still joyboy"
	fmt.Printf("Length of last word in \"%s\": %d\n", input3, lengthOfLastWord(input3))
}
