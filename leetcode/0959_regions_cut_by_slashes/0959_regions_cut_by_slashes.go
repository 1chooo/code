/*
 * Author: Hugo ChunHo Lin <hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/regions-cut-by-slashes
 * Runtime: 0ms (100.00%)
 */

func regionsBySlashes(grid []string) int {
	const maxRegions = 30 * 30 * 4

	type RegionOfGrid int

	const (
		Up    RegionOfGrid = 0
		Left  RegionOfGrid = 1
		Down  RegionOfGrid = 2
		Right RegionOfGrid = 3
	)

	regionLabel := func(n, gridI, gridJ int, r RegionOfGrid) int {
		return (gridI*n+gridJ)*4 + int(r)
	}

	pa := make([]int, maxRegions)
	for i := range pa {
		pa[i] = i
	}

	var find func(int) int
	find = func(x int) int {
		if pa[x] == x {
			return x
		}
		pa[x] = find(pa[x])
		return pa[x]
	}

	merge := func(x, y int) {
		px := find(x)
		py := find(y)
		if px != py {
			pa[px] = py
		}
	}

	n := len(grid)
	m := n * n * 4

	for i := 0; i < n; i++ {
		for j := 0; j < n; j++ {
			if j != 0 {
				merge(regionLabel(n, i, j, Left), regionLabel(n, i, j-1, Right))
			}
			if i != 0 {
				merge(regionLabel(n, i, j, Up), regionLabel(n, i-1, j, Down))
			}

			switch grid[i][j] {
			case ' ':
				merge(regionLabel(n, i, j, Up), regionLabel(n, i, j, Left))
				merge(regionLabel(n, i, j, Down), regionLabel(n, i, j, Right))
				merge(regionLabel(n, i, j, Up), regionLabel(n, i, j, Right))
				merge(regionLabel(n, i, j, Down), regionLabel(n, i, j, Left))
			case '/':
				merge(regionLabel(n, i, j, Up), regionLabel(n, i, j, Left))
				merge(regionLabel(n, i, j, Down), regionLabel(n, i, j, Right))
			case '\\':
				merge(regionLabel(n, i, j, Up), regionLabel(n, i, j, Right))
				merge(regionLabel(n, i, j, Down), regionLabel(n, i, j, Left))
			}
		}
	}

	regions := 0
	for i := 0; i < m; i++ {
		if pa[i] == i {
			regions++
		}
	}

	return regions
}
