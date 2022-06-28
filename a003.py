# Problem link: https://zerojudge.tw/ShowProblem?problemid=a003
# Status: AC

inputString = str(input()).split()

mounth = int(inputString[0])
day = int(inputString[1])

def decideFortune(mounth, day) :
    s = (mounth * 2 + day) % 3
    if (s == 0) :
        print("普通")
    elif (s == 1) :
        print("吉")
    else :
        print("大吉")
    return


decideFortune(mounth, day)