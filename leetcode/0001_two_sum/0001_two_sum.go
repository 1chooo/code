func twoSum(nums []int, target int) []int {
    hashMap := make(map[int]int)

    for i, num := range nums {
        if j, ok := hashMap[num]; ok {
            return []int{j, i}
        }
        hashMap[target - num] = i
    }

    return []int{}
}
