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
    public ListNode MergeTwoLists(ListNode l1, ListNode l2) {
        // Check if either of the lists is empty
        if (l1 == null)
            return l2;
        if (l2 == null)
            return l1;

        // Create a dummy node to start the merged list
        ListNode dummy = new ListNode(0);
        ListNode current = dummy;

        // Loop until both lists have nodes
        while (l1 != null && l2 != null) {
            // Compare the values of the nodes and append the smaller one to the merged list
            if (l1.val <= l2.val) {
                current.next = l1;
                l1 = l1.next;
            }
            else {
                current.next = l2;
                l2 = l2.next;
            }
            current = current.next;
        }

        // Append the remaining nodes from list1 or list2
        if (l1 != null)
            current.next = l1;
        if (l2 != null)
            current.next = l2;

        // Return the merged list starting from the dummy node's next
        return dummy.next;
    }
}
