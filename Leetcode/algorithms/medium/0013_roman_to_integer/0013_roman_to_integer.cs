public class Solution {
    public int RomanToInt(string s) {
        Dictionary<char, int> romanDict = new Dictionary<char, int>() {
            { 'I', 1 },
            { 'V', 5 },
            { 'X', 10 },
            { 'L', 50 },
            { 'C', 100 },
            { 'D', 500 },
            { 'M', 1000 }
        };
        
        int result = 0;
        int prevValue = 0;
        
        foreach (char c in s) {
            int currentValue = romanDict[c];
            result += currentValue;
            
            if (prevValue < currentValue) {
                result -= 2 * prevValue;
            }
            
            prevValue = currentValue;
        }
        
        return result;
    }
}
