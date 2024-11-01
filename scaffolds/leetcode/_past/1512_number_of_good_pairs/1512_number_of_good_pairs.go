package main

import "fmt"

func numIdenticalPairs(nums []int) int {
    goodPairs := 0

    for i := 0; i < len(nums); i++ {
        for j := i + 1; j < len(nums); j++ {
            if nums[j] == nums[i] {
                goodPairs++
            }
        }
    }

    return goodPairs
}

func main() {
    fmt.Println(numIdenticalPairs([]int{1, 2, 3, 1, 1, 3})) // 4
}
