# 10104 Euclid Problem

From Euclid, it is known that for any positive integers A and B, there exist such integers X and Y that AX + BY = D, where D is the greatest common divisor of A and B. The problem is to find for given A and B the corresponding X, Y, and D.

## Input

The input will consist of a set of lines with the integer numbers A and B, separated by a space (A, B < 1000000001).

## Output

For each input line, the output line should consist of three integers X, Y, and D, separated by a space. If there are several such X and Y, you should output the pair for which |X| + |Y| is minimal. If there are several X and Y satisfying the minimal criteria, output the pair for which X ≤ Y.

## Sample Input

```
4 6
17 17
```

## Sample Output

```
-1 1 2
0 1 17
```
