"""
Problem link: https://zerojudge.tw/ShowProblem?problemid=e273 
Status:
"""

length = int(input())
n = input()
ans = n.split(" ")

# for i in range(0, n) :
#     ans[i] = int(input())

index = len(ans) - 1

for i in range(0, length - 1) :
    temp = int(ans[i]) * index
    print(temp, end = " ")
    index -= 1

print(" ")