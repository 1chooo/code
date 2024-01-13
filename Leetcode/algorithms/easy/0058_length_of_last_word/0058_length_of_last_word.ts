function lengthOfLastWord(s: string): number {
    // Split the string by spaces
    const words: string[] = s.trim().split(/\s+/);

    // Check if there are any words after splitting
    if (words.length > 0) {
        // Get the length of the last word in the array
        return words[words.length - 1].length;
    }

    return 0; // If no words found, return 0
}

// Example usage:
const input1: string = "Hello World";
console.log(`Length of last word in "${input1}":`, lengthOfLastWord(input1));

const input2: string = "   fly me   to   the moon  ";
console.log(`Length of last word in "${input2}":`, lengthOfLastWord(input2));

const input3: string = "luffy is still joyboy";
console.log(`Length of last word in "${input3}":`, lengthOfLastWord(input3));
