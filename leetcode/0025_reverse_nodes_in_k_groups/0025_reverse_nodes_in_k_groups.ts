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

class ListNode {
    val: number;
    next: ListNode | null;
    
    constructor(val?: number, next?: ListNode | null) {
        this.val = (val === undefined ? 0 : val);
        this.next = (next === undefined ? null : next);
    }
}

function reverseKGroup(head: ListNode | null, k: number): ListNode | null {
    function reverse(start: ListNode | null, end: ListNode | null): ListNode | null {
        let prev: ListNode | null = null;
        let current: ListNode | null = start;
        while (current !== end) {
            const nextNode: ListNode | null = current!.next;
            current!.next = prev;
            prev = current;
            current = nextNode;
        }
        return prev;
    }

    let count: number = 0;
    let current: ListNode | null = head;
    while (current !== null && count < k) {
        current = current.next;
        count++;
    }

    if (count < k) {
        return head;
    }

    const reversedHead: ListNode | null = reverse(head, current);
    if (head !== null) {
        head.next = reverseKGroup(current, k);
    }

    return reversedHead;
}
