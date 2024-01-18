/**
 * Definition for singly-linked list.
 * class ListNode {
 *     val: number
 *     next: ListNode | null
 *     constructor(val?: number, next?: ListNode | null) {
 *         this.val = (val===undefined ? 0 : val)
 *         this.next = (next===undefined ? null : next)
 *     }
 * }
 */

function addTwoNumbers(l1: ListNode | null, l2: ListNode | null): ListNode | null {
    const dummy = new ListNode(); // Create a dummy node to start the result linked list
    let current: ListNode | null = dummy; // Initialize a pointer for traversal
    let carry: number = 0; // Initialize carry for addition

    while (l1 !== null || l2 !== null || carry !== 0) {
        let sumVal: number = carry;

        if (l1 !== null) {
            sumVal += l1.val;
            l1 = l1.next;
        }

        if (l2 !== null) {
            sumVal += l2.val;
            l2 = l2.next;
        }

        carry = Math.floor(sumVal / 10); // Update carry
        const val: number = sumVal % 10; // Get the value to insert in the new node
        current.next = new ListNode(val); // Create a new node with the calculated value
        current = current.next; // Move the pointer to the next node
    }

    return dummy.next; // Return the next node of the dummy node, which is the starting point of the resultant linked list
}
