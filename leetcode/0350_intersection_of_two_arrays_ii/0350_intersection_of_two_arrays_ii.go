func intersect(nums1 []int, nums2 []int) []int {
    m := make(map[int]int)
    for _, num := range nums1 {
        m[num]++
    }
    var res []int
    for _, num := range nums2 {
        if m[num] > 0 {
            res = append(res, num)
            m[num]--
        }
    }
    return res
}
