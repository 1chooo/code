##  Coloring Houses

The city of Hackerland can be represented with an even number `n` houses arranged in a row. A painter must paint the houses using at most three colors. The following conditions must hold true:

1. No two adjacent houses are the same color.
2. The houses which are at the same distance from both ends must not be colored with the same color. For example, `n=6` then houses will be `[1,2,3,4,5,6]`, so the houses at the same distance from the ends will be `[1,6], [2,5], [3,4]`.

The task is to find the number of ways to paint the houses using at most three colors such that both the above conditions hold true. Since the answer can be large, report it modulo \(10^9 + 7\). Two ways are considered different if at least one house is colored differently.

### Example

For `n = 4`, some of the possible valid arrangements are:

```
(color1, color2, color3, color2)
(color1, color3, color1, color3)
```

The number of ways to paint 4 houses using three colors is 18. Return 18 modulo \(10^9 + 7\) which is 18.

### Function Description

Complete the `countWaysToColorHouses` function in the editor below.

`countWaysToColorHouses` takes in a single parameter:

- `n`: the number of houses

### Return

- `int`: the number of ways in which the houses can be colored, calculated as a modulo of $10^9 + 7$

### Constraints

- $2 <= n <= 100000$
- `n` is an even integer.

### Sample Case 0

**Sample Input For Custom Testing**
```
STDIN     Function
-----     --------
2         n = 2
```

**Sample Output**
```
6
```

**Explanation**

The valid arrangements for 2 houses are:

```
(color1, color2)
(color1, color3)
(color2, color1)
(color3, color1)
(color2, color3)
(color3, color2)
```

### Sample Case 1

**Sample Input For Custom Testing**
```
STDIN     Function
-----     --------
4         n = 4
```

**Sample Output**
```
18
```

**Explanation**

Total valid arrangements for 4 houses are 18.

Some of the valid arrangements are:

```
(color1, color2, color1, color2)
(color1, color3, color1, color3)
(color2, color1, color2, color1)
(color3, color1, color3, color1)
(color2, color3, color2, color3)
(color3, color2, color3, color2)
```
