func twoSum(nums []int, target int) []int {
    if len(nums) == 2 {
        return []int{0, 1}
    }

    hashMap := make(map[int]int)

    for i, num := range nums {
        if j, found := hashMap[num]; found {
            return []int{j, i}
        }
        hashMap[target - num] = i
    }

    return []int{}
}
