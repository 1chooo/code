public class Solution {
    public string LongestCommonPrefix(string[] strs) {
        if (strs == null || strs.Length == 0) {
            return ""; // Return an empty string if the input array is null or empty
        }

        string prefix = strs[0]; // Start with the first string as the initial prefix

        for (int i = 1; i < strs.Length; i++) {
            while (strs[i].IndexOf(prefix) != 0) {
                prefix = prefix.Substring(0, prefix.Length - 1); // Reduce the prefix by one character
                if (prefix.Length == 0) {
                    return ""; // If the prefix becomes empty, no common prefix exists
                }
            }
        }

        return prefix;
    }
}

// Example usage:
class Program {
    static void Main(string[] args) {
        Solution solution = new Solution();
        
        string[] strs1 = { "flower", "flow", "flight" };
        string[] strs2 = { "dog", "racecar", "car" };
        
        Console.WriteLine(solution.LongestCommonPrefix(strs1)); // Output: "fl"
        Console.WriteLine(solution.LongestCommonPrefix(strs2)); // Output: ""
    }
}
