func intToRoman(num int) string {
    if num < 1 || num > 3999 {
        return "" // Return an empty string for out-of-range numbers
    }
    
    val := []int{
        1000, 900, 500, 400,
        100, 90, 50, 40,
        10, 9, 5, 4,
        1,
    }
    syms := []string{
        "M", "CM", "D", "CD",
        "C", "XC", "L", "XL",
        "X", "IX", "V", "IV",
        "I",
    }
    
    var romanNumeral strings.Builder
    i := 0
    
    for num > 0 {
        for num >= val[i] {
            romanNumeral.WriteString(syms[i])
            num -= val[i]
        }
        i++
    }
    
    return romanNumeral.String()
}
