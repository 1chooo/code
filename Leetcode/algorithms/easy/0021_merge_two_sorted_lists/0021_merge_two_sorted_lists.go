/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
 func mergeTwoLists(l1 *ListNode, l2 *ListNode) *ListNode {
    // Check if either of the lists is empty
    if l1 == nil {
        return l2
    }
    if l2 == nil {
        return l1
    }

    // Create a dummy node to start the merged list
    dummy := &ListNode{Val: 0}
    current := dummy

    // Loop until both lists have nodes
    for l1 != nil && l2 != nil {
        // Compare the values of the nodes and append the smaller one to the merged list
        if l1.Val <= l2.Val {
            current.Next = l1
            l1 = l1.Next
        } else {
            current.Next = l2
            l2 = l2.Next
        }
        current = current.Next
    }

    // Append the remaining nodes from list1 or list2
    if l1 != nil {
        current.Next = l1
    }
    if l2 != nil {
        current.Next = l2
    }

    // Return the merged list starting from the dummy node's next
    return dummy.Next
}
