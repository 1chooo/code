public class Solution {
    public string LargestGoodInteger(string num) {
        string maxGood = "";
        
        for (int i = 0; i < num.Length - 2; i++) {
            if (num[i] == num[i + 1] && num[i] == num[i + 2]) {
                string substr = num.Substring(i, 3);
                if (substr.CompareTo(maxGood) > 0) {
                    maxGood = substr;
                }
            }
        }
        
        return maxGood;
    }
}
