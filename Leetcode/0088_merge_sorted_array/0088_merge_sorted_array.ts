/**
 Do not return anything, modify nums1 in-place instead.
 */
 function merge(nums1: number[], m: number, nums2: number[], n: number): void {
    const nums1Copy: number[] = nums1.slice(0, m);

    let p1: number = 0;
    let p2: number = 0;
    let p: number = 0;

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
