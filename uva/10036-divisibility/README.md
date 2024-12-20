10036 Divisibility
Consider an arbitrary sequence of integers. One can place + or - operators between integers in the
sequence, thus deriving different arithmetical expressions that evaluate to different values. Let us, for
example, take the sequence: 17, 5, -21, 15. There are eight possible expressions:
17 + 5 + -21 + 15 = 16
17 + 5 + -21 - 15 = -14
17 + 5 - -21 + 15 = 58
17 + 5 - -21 - 15 = 28
17 - 5 + -21 + 15 = 6
17 - 5 + -21 - 15 = -24
17 - 5 - -21 + 15 = 48
17 - 5 - -21 - 15 = 18
We call the sequence of integers divisible by K if + or - operators can be placed between integers
in the sequence in such way that resulting value is divisible by K. In the above example, the sequence
is divisible by 7 (17+5+-21-15=-14) but is not divisible by 5.
You are to write a program that will determine divisibility of sequence of integers.
Input
The first line of the input file contains a integer M indicating the number of cases to be analyzed. Then
M couples of lines follow.
For each one of this couples, the first line of the input file contains two integers, N and K (1 ≤ N ≤
10000, 2 ≤ K ≤ 100) separated by a space.
The second line contains a sequence of N integers separated by spaces. Each integer is not greater
than 10000 by it’s absolute value.
Output
For each case in the input file, write to the output file the word ‘Divisible’ if given sequence of integers
is divisible by K or ‘Not divisible’ if it’s not.
Sample Input
2
4 7
17 5 -21 15
4 5
17 5 -21 15
Sample Output
Divisible
Not divisible