function largestGoodInteger(num: string): string {
    let maxGood: string = "";

    for (let i = 0; i < num.length - 2; i++) {
        if (num[i] === num[i + 1] && num[i] === num[i + 2]) {
            const substr: string = num.substring(i, i + 3);
            if (substr > maxGood) {
                maxGood = substr;
            }
        }
    }

    return maxGood;
}
