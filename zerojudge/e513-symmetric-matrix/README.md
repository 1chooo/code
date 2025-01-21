# 11349 - Symmetric Matrix

## Description
You're given a square matrix \( M \). Elements of this matrix are \( M_{ij} \) where \( 0 < i < n \) and \( 0 < j < n \). In this problem, you need to determine whether the given matrix is symmetric or not.

**Definition:** A symmetric matrix is a matrix where all elements are non-negative and symmetric with respect to the center of the matrix. Any other matrix is considered non-symmetric.

For example:
```
    5 1 3
M = 2 0 2  is symmetric
    3 1 5
```
```
    5 1 3
M = 2 0 2  is not symmetric, because 3 ≠ 0
    0 1 5
```
You need to determine whether the matrix is symmetric or not. The elements of the matrix given in the input are \(-2^{32} \leq M_{ij} \leq 2^{32}\) and \(0 < n \leq 100\).

### Input
The first line of input contains the number of test cases \( T \leq 300 \). Then \( T \) test cases follow, each described as follows:
- The first line of each test case contains \( n \) – the dimension of the square matrix.
- Then \( n \) lines follow, each containing \( n \) elements separated by a space character. The \( j \)-th number in row \( i \) is the element \( M_{ij} \) of the matrix you need to process.

### Output
For each test case, output one line in the format `Test #t: S`, where \( t \) is the test number starting from 1. \( S \) is `Symmetric` if the matrix is symmetric and `Non-symmetric` otherwise.

### Sample Input
```
2
3
5 1 3
2 0 2
3 1 5
3
5 1 3
2 0 2
0 1 5
```

### Sample Output
```
Test #1: Symmetric
Test #2: Non-symmetric
```
