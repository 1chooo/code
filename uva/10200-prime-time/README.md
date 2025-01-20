# 10200 Prime Time

Euler is a well-known mathematician, and, among many other things, he discovered that the formula `n^2 + n + 41` produces a prime for `0 ≤ n < 40`. For `n = 40`, the formula produces 1681, which is `41 * 41`. Even though this formula doesn’t always produce a prime, it still produces a lot of primes. It’s known that for `n ≤ 10000000`, there are 47.5% of primes produced by the formula!

So, you’ll write a program that will output how many primes the formula outputs for a certain interval.

## Input

Each line of input will be given two positive integers `a` and `b` such that `0 ≤ a ≤ b ≤ 10000`. You must read until the end of the file.

## Output

For each pair `a, b` read, you must output the percentage of prime numbers produced by the formula in this interval (`a ≤ n ≤ b`) rounded to two decimal digits.

## Sample Input

```
0 39
0 40
39 40
```

## Sample Output

```
100.00
97.56
50.00
```