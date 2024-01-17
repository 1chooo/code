function convertToTitle(columnNumber: number): string {
    const alpha: string = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    let result: string = "";

    while (columnNumber > 0) {
        if (columnNumber % 26 === 0) {
            result += "Z";
            columnNumber = Math.floor(columnNumber / 26) - 1;
        } else {
            result += alpha[(columnNumber % 26) - 1];
            columnNumber = Math.floor(columnNumber / 26);
        }
    }

    return reverseString(result);
}

// Function to reverse a string
function reverseString(s: string): string {
    let charArray: string[] = s.split('');
    let start: number = 0;
    let end: number = s.length - 1;

    while (start < end) {
        let temp: string = charArray[start];
        charArray[start] = charArray[end];
        charArray[end] = temp;
        start++;
        end--;
    }

    return charArray.join('');
}
