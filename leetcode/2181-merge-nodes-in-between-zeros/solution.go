// Author: Lin Hugo <hugo@1chooo.com>
// Problem: https://leetcode.com/problems/merge-nodes-in-between-zeros
// Runtime: 16ms (65.74%)

/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */

func mergeNodes(head *ListNode) *ListNode {
    dummy := &ListNode{}
    tail := dummy
    sum := 0

    for cur := head.Next; cur != nil; cur = cur.Next {
        if cur.Val == 0 {
            // End of a segment — create a node with the sum
            tail.Next = &ListNode{Val: sum}
            tail = tail.Next
            sum = 0
        } else {
            sum += cur.Val
        }
    }

    return dummy.Next
}
