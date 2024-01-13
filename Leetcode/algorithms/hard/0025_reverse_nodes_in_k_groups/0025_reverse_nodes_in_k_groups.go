/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */

 type ListNode struct {
	Val  int
	Next *ListNode
}

func reverseKGroup(head *ListNode, k int) *ListNode {
	reverse := func(start, end *ListNode) *ListNode {
		var prev *ListNode
		current := start
		for current != end {
			nextNode := current.Next
			current.Next = prev
			prev = current
			current = nextNode
		}
		return prev
	}

	count := 0
	current := head
	for current != nil && count < k {
		current = current.Next
		count++
	}

	if count < k {
		return head
	}

	reversedHead := reverse(head, current)
	if head != nil {
		head.Next = reverseKGroup(current, k)
	}

	return reversedHead
}
