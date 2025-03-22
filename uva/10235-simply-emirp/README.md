# 10235 Simply Emirp

An integer greater than 1 is called a **prime number** if its only positive divisors (factors) are 1 and itself. Prime numbers have been studied extensively by mathematicians over the years. Applications of prime numbers arise in fields such as **Cryptography** and **Coding Theory**.

Have you tried reversing a prime? For most primes, you get a composite number (e.g., 43 becomes 34). An **Emirp** (Prime spelled backwards) is a prime number that gives you a different prime number when its digits are reversed. For example, 17 is an Emirp because both 17 and 71 are prime.

In this problem, you need to determine whether a number \( N \) is **Non-prime**, **Prime**, or **Emirp**. Assume that \( 1 < N < 1,000,000 \).

Interestingly, Emirps are not new to NTU students. We have been boarding 199 and 179 buses for quite a long time!

## Input

The input consists of several lines, each specifying a value for \( N \).

## Output

For each \( N \) given in the input, the output should contain one of the following:

1. `N is not prime.` – if \( N \) is not a prime number.
2. `N is prime.` – if \( N \) is prime but not an Emirp.
3. `N is emirp.` – if \( N \) is an Emirp.

## Sample Input

```
17
18
19
179
199
```

## Sample Output

```
17 is emirp.
18 is not prime.
19 is prime.
179 is emirp.
199 is emirp.
```
