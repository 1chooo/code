# [1791. Find Center of Star Graph](https://leetcode.com/problems/find-center-of-star-graph/)

There is an undirected star graph consisting of `n` nodes labeled from `1` to `n`. A star graph is a graph where there is one center node and exactly `n - 1` edges that connect the center node with every other node.

You are given a 2D integer array `edges` where each <code>edges[i] = [u<sub>i</sub>, v<sub>i</sub>]</code> indicates that there is an edge between the nodes ui and vi. Return the center of the given star graph.

 

**Example 1:**

![](https://assets.leetcode.com/uploads/2021/02/24/star_graph.png)

- Input: <code>edges = [[1,2],[2,3],[4,2]]</code>
- Output: <code>2</code>
- Explanation: <code>As shown in the figure above, node 2 is connected to every other node, so 2 is the center.</code>


**Example 2:**

- Input: <code>edges = [[1,2],[5,1],[1,3],[1,4]]</code>
- Output: <code>1</code>
 

**Constraints:**

- <code>3 <= n <= 10<sup>5</sup></code>
- <code>edges.length == n - 1</code>
- <code>edges[i].length == 2</code>
- <code>1 <= u<sub>i</sub>, v<sub>i</sub> <= n</code>
- <code>u<sub>i</sub> != v<sub>i</sub></code>
- <code>The given edges represent a valid star graph.</code>

### Intuition

In a star ⭐️ graph, the center node will appear in each of the edges which means every node will contain the center node. So, we just need to find the common node in the first two edges. ✨

### Approach

1. Check if the first node of the first edge is equal to the first node of the second edge or the second node of the second edge. If true, return the first node of the first edge.
2. Otherwise, return the second node of the first edge.

### Complexity

- Time complexity: $O(1)$
- Space complexity: $O(1)$

### Code

```go
func findCenter(edges [][]int) int {
	if edges[0][0] == edges[1][0] || edges[0][0] == edges[1][1] {
		return edges[0][0]
	}
	return edges[0][1]
}
```
