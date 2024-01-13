import java.util.HashMap;
import java.util.Map;
import java.util.Arrays;

class Solution {
    public int[] twoSum(int[] nums, int target) {
        // Base case
        if (nums.length == 2) {
            return new int[]{0, 1};
        }

        // Create a map to store the indices of the numbers that have been seen so far
        Map<Integer, Integer> hMap = new HashMap<>();

        for (int i = 0; i < nums.length; i++) {
            int num = nums[i];
            // Check if the complement of num has been seen before
            int complement = target - num;
            if (hMap.containsKey(complement)) {
                return new int[]{hMap.get(complement), i};
            }
            // Add num and its index to the map
            hMap.put(num, i);
        }

        return new int[]{};
    }
}

// Example usage
class Main {
    public static void main(String[] args) {
        int[] nums = new int[]{2, 7, 11, 15};
        int target = 9;
        Solution solution = new Solution();
        int[] result = solution.twoSum(nums, target);
        System.out.println(Arrays.toString(result)); // prints [0, 1]
    }
}
