#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    // Allocate memory for the returned array
    int* result = (int*)malloc(2 * sizeof(int));
    *returnSize = 0;

    // Base Case
    if (numsSize == 2) {
        result[0] = 0;
        result[1] = 1;
        *returnSize = 2;
        return result;
    }
    
    // Create a hash table to store the indices of the numbers
    // that have been seen so far
    int* hMap = (int*)calloc(numsSize, sizeof(int));
    
    for (int i = 0; i < numsSize; i++) {
        // Check if the complement of nums[i] has been seen before
        int complement = target - nums[i];
        if (hMap[complement]) {
            result[0] = hMap[complement] - 1;
            result[1] = i;
            *returnSize = 2;
            free(hMap);
            return result;
        }
        // Add nums[i] and its index to the hash table
        hMap[nums[i]] = i + 1;
    }
    
    free(hMap);
    return result;
}

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int* returnSize = (int*)malloc(sizeof(int));
    int* result = twoSum(nums, sizeof(nums) / sizeof(int), target, returnSize);
    for (int i = 0; i < *returnSize; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    free(result);
    free(returnSize);
    return 0;
}
