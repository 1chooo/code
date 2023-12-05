/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public int val;
 *     public ListNode next;
 *     public ListNode(int val=0, ListNode next=null) {
 *         this.val = val;
 *         this.next = next;
 *     }
 * }
 */
public class Solution {
    public ListNode AddTwoNumbers(ListNode l1, ListNode l2) {
        ListNode dummy = new ListNode(); // Create a dummy node to start the result linked list
        ListNode current = dummy; // Initialize a pointer for traversal
        int carry = 0; // Initialize carry for addition
        
        while (l1 != null || l2 != null || carry != 0) {
            int sumVal = carry;
            
            if (l1 != null) {
                sumVal += l1.val;
                l1 = l1.next;
            }
            
            if (l2 != null) {
                sumVal += l2.val;
                l2 = l2.next;
            }
            
            carry = sumVal / 10; // Update carry
            int val = sumVal % 10; // Get the value to insert in the new node
            current.next = new ListNode(val); // Create a new node with the calculated value
            current = current.next; // Move the pointer to the next node
        }
        
        return dummy.next; // Return the next node of the dummy node, which is the starting point of the resultant linked list
    }
}
