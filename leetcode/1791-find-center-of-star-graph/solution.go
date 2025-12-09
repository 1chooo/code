/**
 * Author: 1chooo<hugo@1chooo.com>
 * Problem: https://leetcode.com/problems/find-center-of-star-graph
 * Runtime: 0ms (100.00%)
 */

func findCenter(edges [][]int) int {
	if edges[0][0] == edges[1][0] || edges[0][0] == edges[1][1] {
		return edges[0][0]
	}
	return edges[0][1]
}
