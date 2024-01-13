class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        # Create copies of nums1 and nums2
        nums1_copy = nums1[:m]
        nums2_copy = nums2[:n]
        
        # Pointers for nums1_copy, nums2_copy, and nums1
        p1 = 0
        p2 = 0
        p = 0
        
        # Merge nums1_copy and nums2_copy into nums1
        while p1 < m and p2 < n:
            if nums1_copy[p1] <= nums2_copy[p2]:
                nums1[p] = nums1_copy[p1]
                p1 += 1
            else:
                nums1[p] = nums2_copy[p2]
                p2 += 1
            p += 1
        
        # If there are remaining elements in nums1_copy or nums2_copy, append them to nums1
        while p1 < m:
            nums1[p] = nums1_copy[p1]
            p1 += 1
            p += 1
        
        while p2 < n:
            nums1[p] = nums2_copy[p2]
            p2 += 1
            p += 1
