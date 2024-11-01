func survivedRobotsHealths(positions []int, healths []int, directions string) []int {
	n := len(positions)
	sorted := make([]int, n)
	copy(sorted, positions)
	sort.Ints(sorted)
	ordered := make([]int, n)
	for i := 0; i < n; i++ {
		ordered[sort.SearchInts(sorted, positions[i])] = i
	}

	stk := make([]int, 0, n)
	for i := 0; i < n; i++ {
		j := ordered[i]
		if directions[j] == 'R' {
			stk = append(stk, j)
		} else {
			for len(stk) > 0 && healths[j] > healths[stk[len(stk)-1]] {
				healths[stk[len(stk)-1]] = 0
				healths[j]--
				stk = stk[:len(stk)-1]
			}
			if len(stk) > 0 && healths[j] < healths[stk[len(stk)-1]] {
				healths[stk[len(stk)-1]]--
				healths[j] = 0
			}
			if len(stk) > 0 && healths[j] == healths[stk[len(stk)-1]] {
				healths[stk[len(stk)-1]] = 0
				healths[j] = 0
				stk = stk[:len(stk)-1]
			}
		}
	}

	answer := make([]int, 0, n)
	for i := 0; i < n; i++ {
		if healths[i] != 0 {
			answer = append(answer, healths[i])
		}
	}

	return answer
}
