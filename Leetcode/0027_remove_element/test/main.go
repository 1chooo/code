package main

import (
	"fmt"
	"sort"
)

func removeElement(nums []int, val int) int {
	k := 0
	for i := 0; i < len(nums); i++ {
		if nums[i] != val {
			nums[k] = nums[i]
			k++
		}
	}
	return k
}

func judgeRemoveElement() {
	nums := []int{3, 2, 2, 3}
	val := 3
	expectedNums := []int{2, 2}
	expectedLength := len(expectedNums)

	k := removeElement(nums, val)
	if k == expectedLength {
		sort.Ints(nums[:k])
		for i := 0; i < k; i++ {
			if nums[i] != expectedNums[i] {
				panic("Judge test failed.")
			}
		}
		fmt.Println("Judge test passed.")
	} else {
		panic("Judge test failed.")
	}
}

func main() {
	// 執行 Judge 測試
	judgeRemoveElement()
}
