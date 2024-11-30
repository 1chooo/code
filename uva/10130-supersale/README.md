# 10130 SuperSale

There is a SuperSale in a SuperHiperMarket. Every person can take only one object of each kind, i.e., one TV, one carrot, but for an extra low price. We are going with a whole family to that SuperHiperMarket. Every person can take as many objects as he/she can carry out from the SuperSale. We have a given list of objects with prices and their weights. We also know the maximum weight that every person can carry. What is the maximal value of objects we can buy at SuperSale?

## Input

The input consists of T test cases. The number of them (1 ≤ T ≤ 1000) is given on the first line of the input file. Each test case begins with a line containing a single integer number N that indicates the number of objects (1 ≤ N ≤ 1000). Then follows N lines, each containing two integers: P and W. The first integer (1 ≤ P ≤ 100) corresponds to the price of the object. The second integer (1 ≤ W ≤ 30) corresponds to the weight of the object. The next line contains one integer (1 ≤ G ≤ 100) which is the number of people in our group. The next G lines contain the maximal weight (1 ≤ MW ≤ 30) that this i-th person from our family can carry (1 ≤ i ≤ G).

## Output

For every test case, your program has to determine one integer. Print out the maximal value of goods which we can buy with that family.

### Sample Input

```
2
3
72 17
44 23
31 24
1
26
6
64 26
85 22
52 4
99 18
39 13
54 9
4
23
20
20
26
```

### Sample Output

```
72
514
```