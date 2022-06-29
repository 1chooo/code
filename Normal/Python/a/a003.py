# Problem link: https://zerojudge.tw/ShowProblem?problemid=a003
# Status: AC

inputString = str(input()).split()

month = int(inputString[0])
day = int(inputString[1])

def decideFortune(month, day) :
    s = (month * 2 + day) % 3
    if (s == 0) :
        print("普通")
    elif (s == 1) :
        print("吉")
    else :
        print("大吉")
    return


decideFortune(month, day)