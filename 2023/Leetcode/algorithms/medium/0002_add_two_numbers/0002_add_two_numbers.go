/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
 func addTwoNumbers(l1 *ListNode, l2 *ListNode) *ListNode {
    dummy := &ListNode{} // Create a dummy node to start the result linked list
    current := dummy     // Initialize a pointer for traversal
    carry := 0           // Initialize carry for addition

    for l1 != nil || l2 != nil || carry != 0 {
        sumVal := carry

        if l1 != nil {
            sumVal += l1.Val
            l1 = l1.Next
        }

        if l2 != nil {
            sumVal += l2.Val
            l2 = l2.Next
        }

        carry = sumVal / 10                    // Update carry
        val := sumVal % 10                    // Get the value to insert in the new node
        current.Next = &ListNode{Val: val}    // Create a new node with the calculated value
        current = current.Next                // Move the pointer to the next node
    }

    return dummy.Next // Return the next node of the dummy node, which is the starting point of the resultant linked list
}
