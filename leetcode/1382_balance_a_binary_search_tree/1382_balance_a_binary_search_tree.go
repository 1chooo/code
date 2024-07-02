/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */

func balanceBST(root *TreeNode) *TreeNode {
	var arr []*TreeNode

	var dfs func(*TreeNode)
	dfs = func(n *TreeNode) {
		if n.Left != nil {
			dfs(n.Left)
		}
		arr = append(arr, n)
		if n.Right != nil {
			dfs(n.Right)
		}
	}
	dfs(root)

	var build func(int, int) *TreeNode
	build = func(l, r int) *TreeNode {
		if l >= r {
			return nil
		}
		mid := (l + r) / 2
		n := arr[mid]		// root
		n.Left = build(l, mid)
		n.Right = build(mid+1, r)
		return n
	}
	return build(0, len(arr))
}
