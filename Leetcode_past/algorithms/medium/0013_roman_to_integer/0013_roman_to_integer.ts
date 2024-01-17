function romanToInt(s: string): number {
    const romanDict: { [key: string]: number } = {
        'I': 1,
        'V': 5,
        'X': 10,
        'L': 50,
        'C': 100,
        'D': 500,
        'M': 1000
    };

    let result: number = 0;
    let prevValue: number = 0;

    for (let i = 0; i < s.length; i++) {
        const currentValue: number = romanDict[s[i]];
        result += currentValue;

        if (prevValue < currentValue) {
            result -= 2 * prevValue;
        }

        prevValue = currentValue;
    }

    return result;
}
