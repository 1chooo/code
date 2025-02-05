# Decode the Mad Man

(CPE10425, UVA10222)

## Description

Once at BUET, an old professor went completely mad. He started speaking in peculiar words that nobody could understand. This caused great trouble for the BUET authority, and they had no choice but to consider removing him from the university. Suddenly, a student (who was a registered author at the UVA ACM Chapter and held a good rank on the 24-hour Online Judge) created a program that could decode the professor’s speech. After this invention, everyone was relieved, and the old professor resumed his regular duties.  
So, if you ever visit BUET and see a teacher talking into a microphone connected to an IBM computer equipped with voice recognition software, and students taking notes from the computer screen, don’t be surprised! Your task is to write a similar program that can decode the mad professor’s speech.

### Input

The input file will contain only one test case, which is the encoded message. The test case consists of one or more words.

### Output

For the given test case, print a line containing the decoded words. It is not a difficult task to replace each letter or punctuation symbol with the two immediately to its left on a standard keyboard.

### Sample Input

```
k[r dyt I[o
```

### Sample Output

```
how are you
```

## Notes

```cpp
find()
```