/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */

func mergeNodes(head *ListNode) *ListNode {
	var sum int = 0
	var n *ListNode = head.Next

	for cur := head.Next; cur != nil; cur = cur.Next {
		if cur.Val == 0 {
			n.Val = sum
			sum = 0
			n.Next = cur.Next
			n.Val = cur.Next
		} else {
			sum += cur.Val
		}
	}

	return head.Next
}
	