func merge(nums1 []int, m int, nums2 []int, n int) {
    nums1Copy := make([]int, m)
    copy(nums1Copy, nums1)

    p1 := 0
    p2 := 0
    p := 0

    for p1 < m && p2 < n {
        if nums1Copy[p1] <= nums2[p2] {
            nums1[p] = nums1Copy[p1]
            p1++
        } else {
            nums1[p] = nums2[p2]
            p2++
        }
        p++
    }

    for p1 < m {
        nums1[p] = nums1Copy[p1]
        p1++
        p++
    }

    for p2 < n {
        nums1[p] = nums2[p2]
        p2++
        p++
    }
}
