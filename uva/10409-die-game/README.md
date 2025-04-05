# 10409 Die Game

Life is not easy. Sometimes it is beyond your control. As contestants of ACM ICPC, you might be experiencing the challenges of life. But don’t worry! Instead of focusing on the dark side, look at the bright side. Life can be an enjoyable game of chance, like throwing dice. Do or die! Eventually, you might find the route to victory.

This problem involves a game using a die. By the way, do you know what a die is? It has nothing to do with "death." A die is a cubic object with six faces, each representing a number from one to six, marked with the corresponding number of spots. Since dice are usually used in pairs, the term "a die" is rarely used. You might have heard the famous phrase, "the die is cast," though.

When a game starts, a die stands still on a flat table. During the game, the die is tumbled in all directions by the dealer. You win the game if you can predict the number on the top face when the die stops tumbling.

Your task is to write a program that simulates the rolling of a die. For simplicity, assume that the die neither slips nor jumps but only rolls on the table in four directions: north, east, south, and west. At the beginning of every game, the dealer places the die at the center of the table and adjusts its orientation so that the numbers one, two, and three are visible on the top, north, and west faces, respectively. For the other three faces, the golden rule applies: the sum of the numbers on any pair of opposite faces is always seven.

### Problem Description

Your program should accept a sequence of commands, each being either `north`, `east`, `south`, or `west`. A `north` command tumbles the die northward, meaning the top face becomes the new north, the north face becomes the new bottom, and so on. The die rotates around its north-bottom edge by 90 degrees. Similarly, other commands tumble the die in their respective directions. Your program should calculate the number on the top face after executing all commands in the sequence. Assume the table is sufficiently large, and the die never falls off.

### Input

The input consists of one or more command sequences, each corresponding to a single game. 
- The first line of a command sequence contains a positive integer, representing the number of commands in the sequence (less than or equal to 1024). 
- A line containing a zero indicates the end of the input. 
- Each command line includes a command (`north`, `east`, `south`, or `west`). No whitespace occurs in any lines.

### Output

For each command sequence, output a single line containing the number on the top face when the game finishes.

### Sample Input

```
1
north
3
north
east
south
0
```

### Sample Output

```
5
1
```
