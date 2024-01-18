public class Solution {
    public string IntToRoman(int num) {
        if (num < 1 || num > 3999) {
            return ""; // Return an empty string for out-of-range numbers
        }
        
        int[] val = {
            1000, 900, 500, 400,
            100, 90, 50, 40,
            10, 9, 5, 4,
            1
        };
        string[] syms = {
            "M", "CM", "D", "CD",
            "C", "XC", "L", "XL",
            "X", "IX", "V", "IV",
            "I"
        };
        
        string romanNumeral = "";
        int i = 0;
        
        while (num > 0) {
            while (num >= val[i]) {
                romanNumeral += syms[i];
                num -= val[i];
            }
            i++;
        }
        
        return romanNumeral;
    }
}
