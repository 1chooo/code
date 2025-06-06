# [Problem J: Summing Digits](https://zerojudge.tw/ShowProblem?problemid=c813)

(CPE10473, UVA11332)

## Description

For a positive integer \( n \), let \( f(n) \) denote the sum of the digits of \( n \) when represented in base 10. It is easy to see that the sequence of numbers \( n, f(n), f(f(n)), f(f(f(n))), \ldots \) eventually becomes a single digit number that repeats forever. Let this single digit be denoted \( g(n) \).

> For example, consider \( n = 1234567892 \). Then:  
> \( f(n) = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 2 = 47 \)  
> \( f(f(n)) = 4 + 7 = 11 \)  
> \( f(f(f(n))) = 1 + 1 = 2 \)  
> Therefore, \( g(1234567892) = 2 \).

### Input

Each line of input contains a single positive integer \( n \) at most 2,000,000,000. Input is terminated by \( n = 0 \) which should not be processed.

### Output

For each such integer, you are to output a single line containing \( g(n) \).

### Sample Input

```
2
11
47
1234567892
0
```

### Sample Output

```
2
2
2
2
```