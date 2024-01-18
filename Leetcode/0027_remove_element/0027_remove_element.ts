function removeElement(nums: number[], val: number): number {
    let k: number = 0; // Initialize a counter for elements not equal to val
    
    // Iterate through the array
    for (let i = 0; i < nums.length; i++) {
        // If the current element is not equal to val
        if (nums[i] !== val) {
            // Place the current element at index k
            nums[k] = nums[i];
            // Increment the counter for elements not equal to val
            k++;
        }
    }
    
    return k;
}
