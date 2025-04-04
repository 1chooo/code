# 10268 498-bis

Looking through the “Online Judge’s Problem Set Archive,” I found a very interesting problem, number 498, titled **“Polly the Polynomial”**. Frankly speaking, I did not solve it, but I derived from it this problem.

Everything in this problem is a derivative of something from 498. In particular, 498 was “... designed to help you remember ... basic algebra skills, make the world a better place, etc., etc.” This problem is designed to help you remember basic derivation algebra skills, increase the speed at which the world becomes a better place, etc., etc.

In problem 498, you had to evaluate the values of a polynomial:

\[
a_0x^n + a_1x^{n-1} + \dots + a_{n-1}x + a_n
\]

In this problem, you should evaluate its derivative. Remember that the derivative is defined as:

\[
a_0nx^{n-1} + a_1(n-1)x^{n-2} + \dots + a_{n-1}
\]

All the input and output data will fit into integers, i.e., their absolute values will be less than \(2^{31}\).

## Input

Your program should accept an even number of lines of text. Each pair of lines will represent one problem:

1. The first line will contain one integer — a value for \(x\).
2. The second line will contain a list of integers \(a_0, a_1, \dots, a_{n-1}, a_n\), which represent a set of polynomial coefficients.

Input is terminated by `<EOF>`.

## Output

For each pair of lines, your program should evaluate the derivative of the polynomial for the given value of \(x\) and output it in a single line.

### Sample Input

```
7
1 -1
2
1 1 1
```

### Sample Output

```
1
5
```