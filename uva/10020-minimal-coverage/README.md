10020 Minimal coverage
Given several segments of line (int the X axis) with coordinates [Li, Ri]. You are to choose the minimal
amount of them, such they would completely cover the segment [0, M ].
Input
The first line is the number of test cases, followed by a blank line.
Each test case in the input should contains an integer M (1 ≤ M ≤ 5000), followed by pairs “Li Ri”
(|Li|, |Ri| ≤ 50000, i ≤ 100000), each on a separate line. Each test case of input is terminated by pair
‘0 0’.
Each test case will be separated by a single line.
Output
For each test case, in the first line of output your programm should print the minimal number of line
segments which can cover segment [0, M ]. In the following lines, the coordinates of segments, sorted
by their left end (Li), should be printed in the same format as in the input. Pair ‘0 0’ should not be
printed. If [0, M ] can not be covered by given line segments, your programm should print ‘0’ (without
quotes).
Print a blank line between the outputs for two consecutive test cases.
Sample Input
2
1
-1 0
-5 -3
2 5
0 0
1
-1 0
0 1
0 0
Sample Output
0
1
0 1
