# Template

## Header Signatures

```cpp
/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: 
 * Runtime: ms (%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();
```

```py
"""
* Author: 1chooo<hugo970217@gmail.com>
* Problem: 
* Runtime: ms (%)
"""
```

```go
/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: 
 * Runtime: ms (%)
 */
```


# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->

# Approach
<!-- Describe your approach to solving the problem. -->

# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# Code
```
/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */

func mergeNodes(head *ListNode) *ListNode {
	var sum int = 0
	var n *ListNode = head.Next

	for cur := head.Next; cur != nil; cur = cur.Next {
		if cur.Val == 0 {
			n.Val = sum
			sum = 0
			n.Next = cur.Next
			n = cur.Next
		} else {
			sum += cur.Val
		}
	}

	return head.Next
}
```
