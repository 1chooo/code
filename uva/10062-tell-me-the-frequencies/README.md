# 10062 Tell me the frequencies!

Given a line of text, you will have to find out the frequencies of the ASCII characters present in it. The given lines will contain none of the first 32 or last 128 ASCII characters. Lines may end with `\n` and `\r`, but always keep those out of consideration.

## Input

Several lines of text are given as input. Each line of text is considered as a single input. The maximum length of each line is 1000 characters.

## Output

Print the ASCII value of the ASCII characters which are present and their frequency according to the format below. A blank line should separate each set of output. Print the ASCII characters in ascending order of their frequencies. If two characters are present the same number of times, print the information of the ASCII character with the higher ASCII value first. Input is terminated by the end of the file.

### Sample Input

```
AAABBC
122333
```

### Sample Output

```
67 1
66 2
65 3
49 1
50 2
51 3
```