# [10443 - Rock, Scissors, Paper](https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=1384)

Bart’s sister Lisa has created a new civilization on a twodimensional grid. At the outset each grid location may be occupied by one of three life forms: Rocks, Scissors, or P apers. Each day, differing life forms occupying horizontally or vertically adjacent grid locations wage war. In each war, Rocks always defeat Scissors, Scissors always defeat Papers, and Papers always defeat Rocks. At the end of the day, the victor expands its territory to include the loser’s grid position. The loser vacates the position. Your job is to determine the territory occupied by each life form after n days.

**Input**

The first line of input contains t, the number of test cases.
Each test case begins with three integers not greater than
100: r and c, the number of rows and columns in the grid,
and n. The grid is represented by the r lines that follow, each
with c characters. Each character in the grid is ‘R’, ‘S’, or ‘P’,
indicating that it is occupied by Rocks, Scissors, or Papers respectively.

**Output**

For each test case, print the grid as it appears at the end of the n-th day. Leave an empty line between
the output for successive test cases.

**Sample Input**

2  
3 3 1  
RRR  
RSR  
RRR  
3 4 2  
RSPR  
SPRS  
PRSP  

**Sample Output**

RRR  
RRR  
RRR  
RRRS  
RRSP  
RSPR  
