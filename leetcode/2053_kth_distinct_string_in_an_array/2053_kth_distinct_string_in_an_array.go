/*
 * Author: Hugo ChunHo Lin <hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/kth-distinct-string-in-an-array
 * Runtime: 2ms (97.14%)
 */

func kthDistinct(arr []string, k int) string {
	// count the occurence of each string
	counter := make(map[string]int)
	for _, v := range arr {
		counter[v]++
	}

	// find the kth distinct string
	for _, v := range arr {
		if counter[v] == 1 {
			k--
			if k == 0 {
				return v
			}
		}
	}

	return ""
}

/*
 * Author: Hugo ChunHo Lin <hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/kth-distinct-string-in-an-array
 * Runtime: 45ms (11.43%)
 * Reference: https://leetcode.com/problems/kth-distinct-string-in-an-array/solutions/5567370/o-n-two-set-linkedhashmap-beats-100-java-c-python-go-rust-javascript/?envType=daily-question&envId=2024-08-05
 */

func kthDistinct(arr []string, k int) string {
	distinctCount := 0
	for i := 0; i < len(arr); i++ {
		if isDistinct(arr, i) {
			distinctCount++
			if distinctCount == k {
				return arr[i]
			}
		}
	}
	return ""
}

func isDistinct(arr []string, index int) bool {
	count := 0
	for _, value := range arr {
		if value == arr[index] {
			count++
		}
	}
	return count == 1
}
