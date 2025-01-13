# 10190 Divide, But Not Quite Conquer!

Your goal in this problem is to divide a certain integer `n` by another integer `m` until `n = 1`, obtaining a sequence of numbers. Let's call `a[i]` each number of this sequence, and let’s say it has `k` numbers (i.e. you must do `k − 1` successive divisions to reach `n = 1`). You can only have this sequence if the following restrictions are met:

- `a[1] = n`, `a[i] = a[i − 1] ÷ m`, for all `1 < i ≤ k`
- `a[i]` is divisible by `m` (that is, `a[i] mod m = 0`) for all `1 ≤ i < k`
- `a[1] > a[2] > a[3] > ... > a[k]`

For instance, if `n = 125` and `m = 5`, you have `125, 25, 5, and 1` (you did 3 divisions: `125/5`, `25/5`, and `5/5`). So, `k = 4`, `a[1] = 125`, `a[2] = 25`, `a[3] = 5`, and `a[4] = 1`.

If `n = 30` and `m = 3`, you have `30, 10, 3, and 1`. But `a[2] = 10`, and `10 mod 3 = 1`, so there is no sequence because it violates restriction 2. When the sequence doesn’t exist, we think it’s not fun and, thus, very boring!

## Input

The input will consist of an arbitrary number of lines. Each line will consist of two non-negative integers `n, m` which are both less than `2000000000`. You must read until you reach the end of the file.

## Output

For each pair `n, m` you must print the corresponding sequence `a` (as defined above) in a single line, with each adjacent number of the sequence separated by a single space. In the case the sequence doesn’t exist because it violates some restriction, just print the phrase `Boring!` in a single line (without the quotes).

## Sample Input

```
125 5
30 3
80 2
81 3
```

## Sample Output

```
125 25 5 1
Boring!
Boring!
81 27 9 3 1
```
