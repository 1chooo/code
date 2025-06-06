# [10242 - Fourth Point !!](https://zerojudge.tw/ShowProblem?problemid=e512)

Given the (x, y) coordinates of the endpoints of two adjacent sides of a parallelogram, find the coordinates of the fourth point.

## Input

Each line contains eight floating-point numbers:  
- The (x, y) coordinates of one endpoint of the first side  
- The (x, y) coordinates of the other endpoint of the first side  
- The (x, y) coordinates of one endpoint of the second side  
- The (x, y) coordinates of the other endpoint of the second side  

All coordinates are in meters (to the nearest mm), ranging from −10000 to +10000. Input ends at EOF.

## Output

For each input line, print the (x, y) coordinates of the fourth point of the parallelogram, in meters (to the nearest mm), separated by a single space.

## Sample Input

```
0.000 0.000 0.000 1.000 0.000 1.000 1.000 1.000
1.000 0.000 3.500 3.500 3.500 3.500 0.000 1.000
1.866 0.000 3.127 3.543 3.127 3.543 1.412 3.145
```

## Sample Output

```
1.000 0.000
-2.500 -2.500
0.151 -0.398
```