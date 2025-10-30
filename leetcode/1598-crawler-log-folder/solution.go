// Author: Lin Hugo<hugo@1chooo.com>
// Problem: https://leetcode.com/problems/crawler-log-folder
// Runtime: 0ms (100.00%)

// Sparce Complexity: O(1)
func minOperations(logs []string) int {
	d := 0
	for _, log := range logs {
		if log == "../" {
			if d > 0 {
				d--
			}
		} else if log != "./" {
			d++
		}
	}
	return d
}

// Author: Lin Hugo<hugo@1chooo.com>
// Problem: https://leetcode.com/problems/crawler-log-folder
// Runtime: 0ms (100.00%)

// Space Complexity: O(n)
func minOperations(logs []string) int {
	pathsStack := []string{}

	for _, log := range logs {
		if log == "../" {
			if len(pathsStack) > 0 {
				pathsStack = pathsStack[:len(pathsStack)-1]
			}
		} else if log != "./" {
			pathsStack = append(pathsStack, log)
		}
	}

	return len(pathsStack)
}
