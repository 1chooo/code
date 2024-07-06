# [2181. Merge Nodes in Between Zeros](https://leetcode.com/problems/merge-nodes-in-between-zeros)

You are given the `head` of a linked list, which contains a series of integers separated by `0`'s. The beginning and end of the linked list will have `Node.val == 0`.

For every two consecutive `0`'s, merge all the nodes lying in between them into a single node whose value is the sum of all the merged nodes. The modified list should not contain any `0`'s.

Return the `head` of the modified linked list.

**Example 1:**

![2181. Merge Nodes in Between Zeros -- Example 1](https://assets.leetcode.com/uploads/2022/02/02/ex1-1.png)


- Input: head = [0,3,1,0,4,5,2,0]
- Output: [4,11]
- Explanation: `The above figure represents the given linked list. The modified list contains`
    - `The sum of the nodes marked in green: 3 + 1 = 4.`
    - `The sum of the nodes marked in red: 4 + 5 + 2 = 11.`


**Example 2:**

![2181. Merge Nodes in Between Zeros -- Example 2](https://assets.leetcode.com/uploads/2022/02/02/ex2-1.png)

- Input: `head = [0,1,0,3,0,2,2,0]`
- Output: `[1,3,4]`
- Explanation: `The above figure represents the given linked list. The modified list contains`
  - `The sum of the nodes marked in green: 1 = 1.`
  - `The sum of the nodes marked in red: 3 = 3.`
  - `The sum of the nodes marked in yellow: 2 + 2 = 4.`
 

**Constraints:**

- The number of nodes in the list is in the range <code>[3, 2 * 10<sup>5</sup>]</code>.
- `0 <= Node.val <= 1000`
- There are no two consecutive nodes with `Node.val == 0`.
- The beginning and end of the linked list have `Node.val == 0`.

Linked List, Simulation


### Intuition

We realize the **first** and **last** nodes of the linked list are always `0`. We can iterate through the `head` linked list and merge the nodes between two `0`'s. Therefore, we caculate the sum of the nodes between two `0`'s when we iterate through the linked list. If we encounter a `0`, we update the value of the next node and move the pointer to the next node.

### Approach

1. Initialize the `sum` variable to `0` and the `n` pointer to the second node.
2. Iterate through the linked list starting from the second node. (Because the first node is always `0`.)
3. Add the value of the current node to the `sum` until we encounter a `0`.
4. When we encounter a `0`, update the value of the next node to `sum` and move the pointer to the next node. Reset the `sum` to `0`.
5. Continue the iteration until we reach the end of the linked list.
6. Return the head of the modified linked list.


### Complexity
- Time complexity: $O(N)$

- Space complexity: $O(1)$

### Code

```go
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


### Code Walkthrough



Take `head = [0, 3, 1, 0, 4, 5, 2, 0]` as an example, let's go through the code step-by-step with the provided input.


#### Initial Setup
- `head` points to the first node (value 0).
- `n` points to the second node (value 3).
- `sum` is initialized to 0.

#### Iteration 1
- `cur` points to the second node (value 3).
- Since `cur.Val` is not 0, add `cur.Val` to `sum`:

  ```
  sum = 0 + 3 = 3
  ```

#### Iteration 2
- Move `cur` to the third node (value 1).
- Since `cur.Val` is not 0, add `cur.Val` to `sum`:

  ```
  sum = 3 + 1 = 4
  ```

#### Iteration 3
- Move `cur` to the fourth node (value 0).
- Since `cur.Val` is 0, update `n.Val` and move `n`:

  ```
  n.Val = sum = 4
  n.Next = cur.Next (points to node with value 4)
  sum = 0
  n = cur.Next (points to node with value 4)
  ```
  The linked list now looks like this: `[0, 4, 4, 5, 2, 0]`

#### Iteration 4
- Move `cur` to the fifth node (value 4).
- Since `cur.Val` is not 0, add `cur.Val` to `sum`:

  ```
  sum = 0 + 4 = 4
  ```

#### Iteration 5
- Move `cur` to the sixth node (value 5).
- Since `cur.Val` is not 0, add `cur.Val` to `sum`:

  ```
  sum = 4 + 5 = 9
  ```

#### Iteration 6
- Move `cur` to the seventh node (value 2).
- Since `cur.Val` is not 0, add `cur.Val` to `sum`:

  ```
  sum = 9 + 2 = 11
  ```

#### Iteration 7
- Move `cur` to the eighth node (value 0).
- Since `cur.Val` is 0, update `n.Val` and move `n`:

  ```
  n.Val = sum = 11
  n.Next = cur.Next (points to nil, end of the list)
  sum = 0
  n = cur.Next (points to nil)
  ```
  The linked list now looks like this: `[0, 4, 11]`

#### End
- `cur` is now `nil`, so the loop ends.
- Return `head.Next`, which is the new head of the merged linked list.

#### Final Output
The output linked list is: `[4, 11]`

#### Step-by-Step Visualization
1. Start: `[0, 3, 1, 0, 4, 5, 2, 0]`
2. After Iteration 3: `[0, 4, 4, 5, 2, 0]`
3. After Iteration 7: `[0, 4, 11]`

The final merged linked list is: `[4, 11]`
