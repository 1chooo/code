/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
  // Base Case
  if (nums.length === 2) {
      return [0, 1];
  }
  
  // Create a map to store the indices of the numbers that have been seen so far
  const map = new Map();
  
  for (let i = 0; i < nums.length; i++) {
      // Check if the complement of nums[i] has been seen before
      const complement = target - nums[i];
      if (map.has(complement)) {
          return [map.get(complement), i];
      }
      // Add nums[i] and its index to the map
      map.set(nums[i], i);
  }
  
  return [];
};

// Example usage
const nums = [2, 7, 11, 15];
const target = 9;
const result = twoSum(nums, target);
console.log(result); // prints [0, 1]
