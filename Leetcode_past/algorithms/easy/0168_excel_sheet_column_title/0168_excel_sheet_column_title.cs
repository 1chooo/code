public class Solution {
    public string ConvertToTitle(int columnNumber) {
        string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string result = "";

        while (columnNumber > 0) {
            if (columnNumber % 26 == 0) {
                result += "Z";
                columnNumber = columnNumber / 26 - 1;
            } else {
                result += alpha[(columnNumber % 26) - 1];
                columnNumber /= 26;
            }
        }

        return ReverseString(result);
    }

    // Function to reverse a string
    private string ReverseString(string s) {
        char[] charArray = s.ToCharArray();
        int start = 0;
        int end = s.Length - 1;

        while (start < end) {
            char temp = charArray[start];
            charArray[start] = charArray[end];
            charArray[end] = temp;
            start++;
            end--;
        }

        return new string(charArray);
    }
}
