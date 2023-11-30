package main

import "fmt"

func searchInsert(nums []int, target int) int {
    left, right := 0, len(nums)-1

    for left <= right {
        middle := (left + right) / 2

        if nums[middle] == target {
            return middle
        }

        if nums[middle] < target {
            left = middle + 1
        } else {
            right = middle - 1
        }
    }

    return left
}

func main() {
    nums := []int{1, 3, 5, 6}
    target := 5
    fmt.Println(searchInsert(nums, target)) // Output: 2
}
