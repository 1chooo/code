func twoSum(nums []int, target int) []int {
    // Base Case
    if len(nums) == 2 {
        return []int{0, 1}
    }

    // Create a map to store the indices of the numbers that have been seen so far
    hMap := make(map[int]int)

    for i, num := range nums {
        // Check if the complement of num has been seen before
        complement := target - num
        if j, ok := hMap[complement]; ok {
            return []int{j, i}
        }
        // Add num and its index to the map
        hMap[num] = i
    }

    return []int{}
}

// Example usage
func main() {
    nums := []int{2, 7, 11, 15}
    target := 9
    result := twoSum(nums, target)
    fmt.Println(result) // prints [0 1]
}
