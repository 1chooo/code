public class Solution {
    public void Merge(int[] nums1, int m, int[] nums2, int n) {
        // Create a copy of nums1
        int[] nums1Copy = new int[m];
        Array.Copy(nums1, nums1Copy, m);
        
        // Pointers for nums1Copy, nums2, and nums1
        int p1 = 0;
        int p2 = 0;
        int p = 0;
        
        // Merge nums1Copy and nums2 into nums1
        while (p1 < m && p2 < n) {
            if (nums1Copy[p1] <= nums2[p2]) {
                nums1[p] = nums1Copy[p1];
                p1++;
            } else {
                nums1[p] = nums2[p2];
                p2++;
            }
            p++;
        }
        
        // If there are remaining elements in nums1Copy or nums2, append them to nums1
        while (p1 < m) {
            nums1[p] = nums1Copy[p1];
            p1++;
            p++;
        }
        
        while (p2 < n) {
            nums1[p] = nums2[p2];
            p2++;
            p++;
        }
    }
}
