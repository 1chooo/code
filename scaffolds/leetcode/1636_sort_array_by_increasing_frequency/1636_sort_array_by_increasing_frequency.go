func frequencySort(nums []int) []int {
	freq := make(map[int]int)
	for _, num := range nums {
		freq[num]++
	}

	type pair struct {
		value int
		count int
	}
	pairs := make([]pair, len(nums))
	for i, num := range nums {
		pairs[i] = pair{value: num, count: freq[num]}
	}

	sort.Slice(pairs, func(i, j int) bool {
		if pairs[i].count == pairs[j].count {
			return pairs[i].value > pairs[j].value
		}
		return pairs[i].count < pairs[j].count
	})

	for i, p := range pairs {
		nums[i] = p.value
	}
	return nums
}

