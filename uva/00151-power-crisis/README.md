# [151 - Power Crisis]((https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=191))

## Problem Description

During a power crisis in New Zealand, a fair system was needed to turn off power in different regions. The country is divided into `N` regions (with Auckland as region 1 and Wellington as region 13). A number `m` is chosen, and power is turned off first in region 1, then in every `m`-th region after that, wrapping around and skipping already powered-off regions.

For example, with `N = 17` and `m = 5`, the order of power shutdown is:  
`1, 6, 11, 16, 5, 12, 2, 9, 17, 10, 4, 15, 14, 3, 8, 13, 7`.

The goal is to choose the smallest `m` such that Wellington (region 13) is the last region to lose power.

## Input

- Each line contains an integer `N` (`13 ≤ N < 100`), the number of regions.
- The input ends with a line containing a single `0`.

## Output

- For each input line, output the smallest `m` such that region 13 is the last to be turned off.

## Sample Input

```
17
0
```

## Sample Output

```
7
```
