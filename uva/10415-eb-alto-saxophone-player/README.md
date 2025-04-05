# 10415 Eb Alto Saxophone Player

Do you like saxophone? I have an Eb Alto Saxophone, shown on the right. My fingers move **a lot** when playing some music, and I’m quite interested in how many times each finger **presses** the button. Assume that the music is composed of only 8 kinds of notes. They are: `C`, `D`, `E`, `F`, `G`, `A`, `B` in one octave and `C`, `D`, `E`, `F`, `G`, `A`, `B` in a higher octave. We use `c`, `d`, `e`, `f`, `g`, `a`, `b`, `C`, `D`, `E`, `F`, `G`, `A`, `B` to represent them. The fingers I use for each note are:

- `c`: finger 2–4, 7–10  
- `d`: finger 2–4, 7–9  
- `e`: finger 2–4, 7, 8  
- `f`: finger 2–4, 7  
- `g`: finger 2–4  
- `a`: finger 2, 3  
- `b`: finger 2  
- `C`: finger 3  
- `D`: finger 1–4, 7–9  
- `E`: finger 1–4, 7, 8  
- `F`: finger 1–4, 7  
- `G`: finger 1–4  
- `A`: finger 1–3  
- `B`: finger 1–2  

> **Note:** Every finger is controlling a specified button, and different fingers control different buttons.

### Problem Statement

Write a program to help count the number of times each finger presses the button. A finger presses a button if it is needed in a note but not used in the last note. Additionally, if it is the first note, every finger required presses the button.

### Input

- The first line of the input is a single integer `t` (1 ≤ `t` ≤ 1000), indicating the number of test cases.  
- For each test case, there is only one line containing the song.  
- The only allowed characters are `{‘c’,‘d’,‘e’,‘f’,‘g’,‘a’,‘b’, ‘C',‘D’,‘E’,‘F’,‘G’,‘A’,‘B’}`.  
- There are at most 200 notes in a song, and the song may be empty.

### Output

For each test case, print 10 numbers indicating the number of presses for each finger. Numbers are separated by a single space.

### Sample Input

```
3
cdefgab
BAGFEDC
CbCaDCbCbCCbCbabCCbCbabae
```

### Sample Output

```
0 1 1 1 0 0 1 1 1 1
1 1 1 1 0 0 1 1 1 0
1 8 10 2 0 0 2 2 1 0
```
