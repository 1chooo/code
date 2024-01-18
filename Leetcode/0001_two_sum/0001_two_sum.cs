using System;
using System.Collections.Generic;

public class Solution {
    public int[] TwoSum(int[] nums, int target) {
        // Base Case
        if (nums.Length == 2) {
            return new int[] { 0, 1 };
        }

        // a + b = c
        // c - b = a

        Dictionary<int, int> hMap = new Dictionary<int, int>();

        for (int i = 0; i < nums.Length; i++) {
            if (hMap.ContainsKey(nums[i])) {
                return new int[] { hMap[nums[i]], i };
            } else {
                hMap[target - nums[i]] = i;
            }
        }

        // If no solution is found, return an empty array
        return Array.Empty<int>();
    }
}
