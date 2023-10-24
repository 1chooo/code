"""
Created Date: 2023/10/25
Author: @1chooo (Hugo ChunHo Lin)
Problem link: https://zerojudge.tw/ShowProblem?problemid=a001
Status: AC
"""

table = {
    'I': 1,
    'V': 5,
    'X': 10,
    'L': 50,
    'C': 100,
    'D': 500,
    'M': 1000,
}

# 羅馬數字轉阿拉伯數字
def roman_int(n):
    roman = [i for i in n]
    r = roman[::-1]
    output = table[r[0]]
    for i in range(1, len(r)):
        if table[r[i]] < table[r[i-1]]:
            output = output - table[r[i]]
        else:
            output = output + table[r[i]]
    return output

num_table = [
    [1000, 'M'],
    [900, 'CM'],
    [500, 'D'],
    [400, 'CD'],
    [100, 'C'],
    [90, 'XC'],
    [50, 'L'],
    [40, 'XL'],
    [10, 'X'],
    [9, 'IX'],
    [5, 'V'],
    [4, 'IV'],
    [1, 'I']
]

# 阿拉伯數字轉羅馬數字
def int_roman(n):
    num = int(n)
    output = ''
    for i in num_table:
        a = divmod(num, i[0])
        if a!=0:
            num = a[1]
            output = output + i[1]*a[0]
    return output

while True:
    try:
        val = input().split(' ')
        a = roman_int(val[0])
        b = roman_int(val[1])
        c = abs(a-b)          # 計算相減的絕對值
        if c==0:
            print('ZERO')       # 如果等於 0，輸出 ZERO
        else:
            print(int_roman(c)) # 如果不等於 0，轉換成羅馬數字
    except:
        break
