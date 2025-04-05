# 10298 Power Strings

## Problem Description

Given two strings `a` and `b`, we define `a * b` to be their concatenation. For example, if `a = "abc"` and `b = "def"`, then `a * b = "abcdef"`. If we think of concatenation as multiplication, exponentiation by a non-negative integer is defined in the normal way:

- `a^0 = ""` (the empty string)
- `a^(n+1) = a * (a^n)`

### Input

Each test case is a line of input representing `s`, a string of printable characters. The length of `s` will be at least 1 and will not exceed 1 million characters. A line containing a period (`.`) follows the last test case.

### Output

For each string `s`, you should print the largest integer `n` such that `s = a^n` for some string `a`.

## Sample Input

```
abcd
aaaa
ababab
.
```

## Sample Output

```
1
4
3
```
