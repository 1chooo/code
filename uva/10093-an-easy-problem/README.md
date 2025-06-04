# An Easy Problem!

(UVA 10093, CPE10413)

## Problem Description

Given a number \( R \) in an unknown base \( N \) (where \( 2 \leq N \leq 62 \)), and knowing that \( R \) is divisible by \( N-1 \), determine the smallest possible value of \( N \).

- The digit symbols for base 62 are: `0-9`, `A-Z`, and `a-z`.
- For base 61: `0-9`, `A-Z`, and `a-y`.
- And so on.

## Input

Each line contains a single integer (as a string) in some base between 2 and 62. All inputs are valid numbers in their respective bases.

## Output

For each input line, print the smallest base \( N \) (in decimal) such that \( R \) is divisible by \( N-1 \).  
If no such base exists, output:

```
such number is impossible!
```

## Sample Input

```
3
5
A
```

## Sample Output

```
4
6
11
```