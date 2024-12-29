# A - Doom's Day Algorithm

(CPE22801, UVA12019)

## Description

No, Doom’s day algorithm is not a method to compute which day the world will end. It is an algorithm created by the mathematician John Horton Conway to calculate which day of the week (Monday, Tuesday, etc.) corresponds to a certain date.  
This algorithm is based on the idea of the doomsday, a certain day of the week which always occurs on the same dates. For example, 4/4 (the 4th of April), 6/6 (the 6th of June), 8/8 (the 8th of August), 10/10 (the 10th of October), and 12/12 (the 12th of December) are dates which always occur on doomsday. All years have their own doomsday.  
In the year 2011, doomsday is Monday. So all of 4/4, 6/6, 8/8, 10/10, and 12/12 are Mondays. Using that information, you can easily compute any other date. For example, the 13th of December 2011 will be Tuesday, the 14th of December 2011 will be Wednesday, etc.  
Other days which occur on doomsday are 5/9, 9/5, 7/11, and 11/7. Also, in leap years, we have the following doomsdays: 1/11 (the 11th of January) and 2/22 (the 22nd of February), and in non-leap years 1/10 and 2/21.  
Given a date of the year 2011, you have to compute which day of the week it occurs.

### Input

The input can contain different test cases. The first line of the input indicates the number of test cases.  
For each test case, there is a line with two numbers: M D. M represents the month (from 1 to 12) and D represents the day (from 1 to 31). The date will always be valid.

### Output

For each test case, you have to output the day of the week on which that date occurs in 2011. The days of the week will be: Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday.

### Sample Input

```
8  
1 6  
2 28  
4 5  
5 26  
8 1  
11 1  
12 25  
12 31  
```

### Sample Output

```
Thursday  
Monday  
Tuesday  
Thursday  
Monday  
Tuesday  
Sunday  
Saturday  
```

### Solution

- 2010/12/31: Friday
- 2022/12/31: Saturday