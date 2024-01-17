using System;

public class Solution {
    public string ReverseStr(string s, int k) {
        char[] sList = s.ToCharArray(); // Convert the string into a char array
        
        for (int i = 0; i < sList.Length; i += 2 * k) {
            int end = i + k;
            if (end > sList.Length) {
                end = sList.Length;
            }
            
            // Reverse the first k characters within each 2k block
            ReverseSubstring(sList, i, end);
        }
        
        // Convert the modified array back to a string
        return new string(sList);
    }
    
    private void ReverseSubstring(char[] s, int start, int end) {
        while (start < end) {
            char temp = s[start];
            s[start] = s[end - 1];
            s[end - 1] = temp;
            start++;
            end--;
        }
    }
}

class Program {
    static void Main() {
        Solution solution = new Solution();
        
        Console.WriteLine(solution.ReverseStr("abcdefg", 2)); // Output: "bacdfeg"
        Console.WriteLine(solution.ReverseStr("abcd", 2));    // Output: "bacd"
    }
}
