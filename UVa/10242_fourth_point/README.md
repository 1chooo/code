# [10242 - Fourth Point !!](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1183)

Given are the (x, y) coordinates of the endpoints of two adjacent sides of a parallelogram. Find the
(x, y) coordinates of the fourth point.


**Input**

Each line of input contains eight floating point numbers: the (x, y) coordinates of one of the endpoints
of the first side followed by the (x, y) coordinates of the other endpoint of the first side, followed by the (x, y) coordinates of one of the endpoints of the second side followed by the (x, y) coordinates of the other endpoint of the second side. All coordinates are in meters, to the nearest mm. All coordinates are between −10000 and +10000. Input is terminated by end of file.

**Output**

For each line of input, print the (x, y) coordinates of the fourth point of the parallelogram in meters,
to the nearest mm, separated by a single space.

**Sample Input**

0.000 0.000 0.000 1.000 0.000 1.000 1.000 1.000  
1.000 0.000 3.500 3.500 3.500 3.500 0.000 1.000  
1.866 0.000 3.127 3.543 3.127 3.543 1.412 3.145  

**Sample Output**

1.000 0.000  
-2.500 -2.500  
0.151 -0.398  