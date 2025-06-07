# [1022 - Covering Whole Holes](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3463)

## Problem Description

Can you cover a round hole with a square cover? You can, as long as the square cover is big enough. It obviously will not be an exact fit, but it is still possible to cover the hole completely.

The Association of Cover Manufacturers (ACM) is a group of companies that produce covers for all kinds of holes — manholes, holes on streets, wells, ditches, cave entrances, holes in backyards dug by dogs to bury bones, to name only a few. ACM wants a program that determines whether a given cover can be used to completely cover a specified hole.

At this time, they are interested only in covers and holes that are **rectangular polygons** (that is, polygons with interior angles of only 90 or 270 degrees). Moreover, both cover and hole are aligned along the same coordinate axes, and are not supposed to be rotated against each other — just translated relative to each other.

## Input

- The input consists of several descriptions of covers and holes.
- The first line of each description contains two integers `h` and `c` (`4 ≤ h ≤ 50` and `4 ≤ c ≤ 50`), the number of points of the polygon describing the hole and the cover respectively.
- Each of the following `h` lines contains two integers `x` and `y`, which are the vertices of the hole’s polygon in the order they would be visited in a trip around the polygon.
- The next `c` lines give a corresponding description of the cover.
- Both polygons are rectangular, and the sides of the polygons are aligned with the coordinate axes. The polygons have positive area and do not intersect themselves.
- The last description is followed by a line containing two zeros.

## Output

For each problem description, print its number in the sequence of descriptions. If the hole can be completely covered by moving the cover (without rotating it), print `Yes`; otherwise, print `No`.

Follow the output format in the example given below.

## Sample Input

```
4 4
0 0
0 10
10 10
10 0
0 0
0 20
20 20
20 0
4 6
0 0
0 10
10 10
10 0
0 0
0 10
10 10
10 1
9 1
9 0
0 0
```

## Sample Output

```
Hole 1: Yes
Hole 2: No
```
