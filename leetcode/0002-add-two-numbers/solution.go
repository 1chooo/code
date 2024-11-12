/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/add-two-numbers/
 * Runtime: 0ms (100.00%)
 */

/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */

func addTwoNumbers(l1 *ListNode, l2 *ListNode) *ListNode {
	dummy := &ListNode{}
	dummyHead := dummy
	carry := 0

	for l1 != nil && l2 != nil {
		sum := l1.Val + l2.Val + carry
		dummy.Next = &ListNode{Val: sum % 10}
		carry = sum / 10

		l1 = l1.Next
		l2 = l2.Next
		dummy = dummy.Next
	}

	if l1 == nil {
		l1, l2 = l2, l1
	}

	for l1 != nil {
		sum := l1.Val + carry
		dummy.Next = &ListNode{Val: sum % 10}
		carry = sum / 10

		l1 = l1.Next
		dummy = dummy.Next
	}

	if carry != 0 {
		dummy.Next = &ListNode{Val: carry}
	}

	return dummyHead.Next
}
