function intToRoman(num: number): string {
    if (num < 1 || num > 3999) {
        return ""; // Return an empty string for out-of-range numbers
    }
    
    const val: number[] = [
        1000, 900, 500, 400,
        100, 90, 50, 40,
        10, 9, 5, 4,
        1,
    ];
    const syms: string[] = [
        "M", "CM", "D", "CD",
        "C", "XC", "L", "XL",
        "X", "IX", "V", "IV",
        "I",
    ];
    
    let romanNumeral: string = "";
    let i: number = 0;
    
    while (num > 0) {
        while (num >= val[i]) {
            romanNumeral += syms[i];
            num -= val[i];
        }
        i++;
    }
    
    return romanNumeral;
}
