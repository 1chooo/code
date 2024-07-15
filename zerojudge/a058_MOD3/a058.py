times = int(input())

zero = 0
one = 0
two = 0

for i in range(times):
    temp = int(input())

    if temp % 3 == 0:
        zero += 1
    elif temp % 3 == 1:
        one += 1
    else:
        two += 1

print(zero, one, two)
