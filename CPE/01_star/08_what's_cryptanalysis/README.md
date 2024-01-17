# What's Cryptanalysis?	

(CPE10402, UVA10008)

## Descriptions

Cryptanalysis is the process of breaking someone else’s cryptographic writing. This sometimes involves some kind of statistical analysis of a passage of (encrypted) text. Your task is to write a program which performs a simple analysis of a given text.
### Input
The first line of input contains a single positive decimal integer n. This is the number of lines which follow in the input. The next n lines will contain zero or more characters (possibly including whitespace). This is the text which must be analyzed.
### Output
Each line of output contains a single uppercase letter, followed by a single space, then followed by a positive decimal integer. The integer indicates how many times the corresponding letter appears in the input text. Upper and lower case letters in the input are to be considered the same. No other characters must be counted. The output must be sorted in descending count order; that is, the most frequent letter is on the first output line, and the last line of output indicates the least frequent letter. If two letters have the same frequency, then the letter which comes first in the alphabet must appear first in the output. If a letter does not appear in the text, then that letter must not appear in the output.
### Sample Input  
3  
This is a test.  
Count me 1 2 3 4 5.  
Wow!!!! Is this question easy?  
### Sample Output
S 7  
T 6  
I 5  
E 4  
O 3  
A 2  
H 2  
N 2  
U 2  
W 2  
C 1  
M 1  
Q 1  
Y 1  

## Note
```CPP
freq_list.emplace_back(frequency[i], 'A' + i);

frequencyList.push_back(make_pair(frequency[i], 'A' + i));
```

這行程式碼是在將 `frequency[i]` 和 `'A' + i` 組成一個 `pair`，並將其加入到名為 `freq_list` 的 vector 中的最後一個元素。具體來說，`freq_list` 是一個 `vector<pair<int, char>>` 的容器，其中 `pair` 的第一個元素是頻率值，第二個元素是對應的字母。`emplace_back()` 函數是將新元素添加到 vector 的尾部，可以使用傳遞給構造函數的參數初始化新元素。這樣，`freq_list` 將包含每個字母出現次數的頻率值和字母本身。