# 10295 Hay Points

Each employee of a bureaucracy has a job description — a few paragraphs that describe the responsibilities of the job. The employee's job description, combined with other factors, such as seniority, is used to determine his or her salary.

The Hay Point system frees the Human Resources department from having to make an intelligent judgment as to the value of the employee; the job description is merely scanned for words and phrases that indicate responsibility. In particular, job descriptions that indicate control over a large budget or management over a large number of people yield high Hay Point scores.

You are to implement a simplified Hay Point system. You will be given a Hay Point dictionary and a number of job descriptions. For each job description, you are to compute the salary associated with the job, according to the system.

## Input

The first line of input contains 2 positive integers: `m ≤ 1000`, the number of words in the Hay Point dictionary, and `n ≤ 100`, the number of job descriptions. 

- `m` lines follow; each contains a word (a string of up to 16 lower-case letters) and a dollar value (a real number between 0 and 1,000,000). 
- Following the dictionary are the `n` job descriptions. Each job description consists of one or more lines of text; for your convenience, the text has been converted to lower case and has no characters other than letters, numbers, and spaces. 
- Each job description is terminated by a line containing a period (`.`).

## Output

For each job description, output the corresponding salary computed as the sum of the Hay Point values for all words that appear in the description. Words that do not appear in the dictionary have a value of `0`.

### Sample Input

```
7 2
administer 100000
spending 200000
manage 50000
responsibility 25000
expertise 100
skill 50
money 75000
the incumbent will administer the spending of kindergarden milk money
and exercise responsibility for making change he or she will share
responsibility for the task of managing the money with the assistant
whose skill and expertise shall ensure the successful spending exercise
.

this individual must have the skill to perform a heart transplant and
expertise in rocket science
.
```

### Sample Output

```
700150
150
```
