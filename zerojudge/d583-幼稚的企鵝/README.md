# [d583. 幼稚的企鵝](https://zerojudge.tw/ShowProblem?problemid=d583)

小企鵝總是天真可愛，但擺脫不了幾分幼稚。
現在企鵝幼稚園的企鵝老師要小企鵝任意排隊。
而小企鵝們卻很堅持要照老師給他們的座號來排隊，
偏偏有的小企鵝就是會忘記自己的座號亂排，
於是可以想見的是一群短鳥喙的小企鵝爭吵互啄的景象了…

| Sample |                                                                                       Input                                                                                        |                                                  Output                                                  |
| :----: | :--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------: | :------------------------------------------------------------------------------------------------------: |
|  說明  | 本題有2個測資點，每個50分，每個測資點有多組測資。<br>每組測資的第一行有整數n(1<=n<=100000)代表有幾隻企鵝。<br>第二行則有n個數字的數列代表每隻企鵝的座號，並且座號必定有1~n不重覆。 |                                      請由小到大輸出已經排序的數列。                                      |
|  # 1   |                                10<br>9 5 10 4 3 6 1 2 7 8<br>30<br>30 29 28 27 26 25 10 11 12 13 15 14 16 19 18 17 20 24 23 22 21 8 9 7 6 5 3 4 2 1                                | 1 2 3 4 5 6 7 8 9 10<br>1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 |

### [Python 解]

```py
while True:
    try:
        n = int(input())
        a = [int(x) for x in input().split()]
        a.sort()
        print(*a)
    except EOFError:
        break
```
