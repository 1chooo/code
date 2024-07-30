"""
Problem link: https://zerojudge.tw/ShowProblem?problemid=b969
Status: AC
"""

names = str(input())
greetings = str(input())

namesList = names.split(" ");
namesListLen = len(namesList)

for name in range(0, namesListLen) :
    print(f"{greetings}, {namesList[name]}")
