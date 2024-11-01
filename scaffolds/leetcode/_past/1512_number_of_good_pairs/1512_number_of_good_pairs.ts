function numIdenticalPairs(nums: number[]): number {
  let goodPairs: number = 0;

  for (let i: number = 0; i < nums.length; i++) {
    for (let j: number = 0; j < nums.length; j++) {
      if (i < j && nums[j] == nums[i])
        goodPairs++;
    }
  }

  return goodPairs;
};

console.log(numIdenticalPairs([1, 2, 3, 1, 1, 3])); // 4
