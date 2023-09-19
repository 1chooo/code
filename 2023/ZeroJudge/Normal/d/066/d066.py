values = list(map(int, input().split()))

hour = values[0]
minute = values[1]

if hour == 7:
    if minute >= 30:
        print("At School")
    else:
        print("Off School")
elif hour > 7 and hour < 17:
    print("At School")
else:
    print("Off School")
