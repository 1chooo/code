class Solution:
    def removeElement(self, nums, val):
        k = 0  # Initialize a counter for elements not equal to val
        
        # Iterate through the array
        for i in range(len(nums)):
            # If the current element is not equal to val
            if nums[i] != val:
                # Place the current element at index k
                nums[k] = nums[i]
                # Increment the counter for elements not equal to val
                k += 1
        
        return k
