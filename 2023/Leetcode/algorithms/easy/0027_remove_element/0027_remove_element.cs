public class Solution {
    public int RemoveElement(int[] nums, int val) {
        int k = 0; // Initialize a counter for elements not equal to val
        
        // Iterate through the array
        for (int i = 0; i < nums.Length; i++) {
            // If the current element is not equal to val
            if (nums[i] != val) {
                // Place the current element at index k
                nums[k] = nums[i];
                // Increment the counter for elements not equal to val
                k++;
            }
        }
        
        return k;
    }
}
