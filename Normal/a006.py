# Problem link: https://zerojudge.tw/ShowProblem?problemid=a006
# Status: AC

inputString = str(input()).split(" ")

a = int(inputString[0])
b = int(inputString[1])
c = int(inputString[2])

def discriminant(a, b, c) :
    d = float(b * b - 4 * a * c)

    if (d > 0.0) :
        x1 = int((-b + d ** (1 / 2)) / 2 * a)
        x2 = int((-b - d ** (1 / 2)) / 2 * a)
        print(f"Two different roots x1={x1} , x2={x2}")
    elif (d == 0.0) :
        x = int((-b) / (2 * a))
        print(f"Two same roots x={x}")
    else :
        print("No real root")
    return

discriminant(a, b, c)