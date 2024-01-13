public class Solution {
    public int LengthOfLastWord(string s) {
        // Trim the string to remove leading and trailing spaces
        s = s.Trim();
        
        // Split the string by spaces
        string[] words = s.Split(' ');
        
        // Check if there are any words after splitting
        if (words.Length > 0) {
            // Get the length of the last word in the array
            return words[words.Length - 1].Length;
        }
        
        return 0; // If no words found, return 0
    }
}
