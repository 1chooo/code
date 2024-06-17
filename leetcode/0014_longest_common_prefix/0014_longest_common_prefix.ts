function longestCommonPrefix(strs: string[]): string {
    if (!strs.length) {
        return ""; // Return an empty string if the input array is empty
    }

    let prefix: string = strs[0]; // Start with the first string as the initial prefix

    for (let i = 1; i < strs.length; i++) {
        while (strs[i].indexOf(prefix) !== 0) {
            prefix = prefix.slice(0, -1); // Reduce the prefix by one character
            if (prefix.length === 0) {
                return ""; // If the prefix becomes empty, no common prefix exists
            }
        }
    }

    return prefix;
}

// Example usage:
const strs1: string[] = ["flower", "flow", "flight"];
const strs2: string[] = ["dog", "racecar", "car"];

console.log(longestCommonPrefix(strs1)); // Output: "fl"
console.log(longestCommonPrefix(strs2)); // Output: ""
