/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */

func nodesBetweenCriticalPoints(head *ListNode) []int {
	prev := head
	first := -1
	last := -1
	d := math.MaxInt32
	i := 0
	for cur := head.Next; cur.Next != nil; cur = cur.Next {
		if (prev.Val < cur.Val && cur.Next.Val < cur.Val) || 
			(prev.Val > cur.Val && cur.Next.Val > cur.Val) {
			if first == -1 {
				first = i
				last = i
			} else {
				d = min(d, i - last)
				last = i
			}
		}
		prev = cur
		i++
	}
	if d == math.MaxInt32 {
		return []int{-1, -1}
	}
	return []int{d, last - first}
}
