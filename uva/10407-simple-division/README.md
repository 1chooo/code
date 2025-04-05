# 10407 Simple Division

Integer division between a dividend `n` and a divisor `d` yields a quotient `q` and a remainder `r`. The quotient `q` is the integer that maximizes `q * d` such that `q * d ≤ n` and `r = n - q * d`.

For any set of integers, there exists an integer `d` such that each of the given integers, when divided by `d`, leaves the same remainder.

## Input

Each line of input contains a sequence of nonzero integer numbers separated by a space. The last number on each line is `0`, and this number does not belong to the sequence. There will be at least 2 and no more than 1000 numbers in a sequence. Not all numbers occurring in a sequence are equal. The last line of input contains a single `0` and should not be processed.

## Output

For each line of input, output the largest integer which, when divided into each of the input integers, leaves the same remainder.

### Sample Input

```
701 1059 1417 2312 0
14 23 17 32 122 0
14 -22 17 -31 -124 0
0
```

### Sample Output

```
179
3
3
```
