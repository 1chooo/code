# 10170 The Hotel with Infinite Rooms

The city of HaluaRuti has a strange hotel with infinite rooms. The groups that come to this hotel follow these rules:

1. At the same time, only members of one group can rent the hotel.
2. Each group comes in the morning of the check-in day and leaves the hotel in the evening of the check-out day.
3. Another group comes in the very next morning after the previous group has left the hotel.
4. A very important property of the incoming group is that it has one more member than its previous group unless it is the starting group. You will be given the number of members of the starting group.
5. A group with `n` members stays for `n` days in the hotel. For example, if a group of four members comes on 1st August in the morning, it will leave the hotel on 4th August in the evening and the next group of five members will come on 5th August in the morning and stay for five days, and so on.

Given the initial group size, you will have to find the group size staying in the hotel on a specified day.

## Input

The input contains round numbers `S` (1 ≤ S ≤ 10000) and `D` (1 ≤ D < 10^15) in every line. `S` denotes the initial size of the group and `D` denotes that you will have to find the group size staying in the hotel on the `D`-th day (starting from 1). All the input and output integers will be less than 10^15. A group size `S` means that on the first day a group of `S` members come to the hotel and stays for `S` days, then comes a group of `S + 1` members according to the previously described rules, and so on.

## Output

For each line of input, print on a single line the size of the group staying in the hotel on the `D`-th day.

## Sample Input

```
1 6
3 10
3 14
```

## Sample Output

```
3
5
6
```
