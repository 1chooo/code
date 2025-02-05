# Common Permutation

(CPE10567, UVA10252)

## Description

Given two strings of lowercase letters, `a` and `b`, print the longest string `x` of lowercase letters such that there is a permutation of `x` that is a subsequence of `a` and there is a permutation of `x` that is a subsequence of `b`.

## Input

The input file contains several lines of input. Consecutive two lines make a set of input. That means in the input file, line 1 and 2 is a set of input, line 3 and 4 is a set of input, and so on. The first line of a pair contains `a` and the second contains `b`. Each string is on a separate line and consists of at most 1000 lowercase letters.

## Output

For each set of input, output a line containing `x`. If several `x` satisfy the criteria above, choose the first one in alphabetical order.

## Sample Input

```
pretty
women
walking
down
the
street
```

## Sample Output

```
e
nw
et
```