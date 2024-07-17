# [a104. 排序](https://zerojudge.tw/ShowProblem?problemid=a104)

幫我排個數字謝謝QQ

| Sample | Input | Output |
| :------: | :--------: | :------: |
| 說明 | 有多筆測資以EOF為結束<br>第一行有一個正整數n(1<=n<=1000)，代表有幾個數字要請你幫忙排<br>第二行有n個可以用int儲存的正整數 | 輸出n個已由小到大排序好的正整數 |
| # 1 | 6<br>7 9 0 4 1 8<br>8<br>1 9 9 0 0 9 2 8 | 0 1 4 7 8 9<br>0 0 1 2 8 9 9 9 |

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

### [C++ 解]

```cpp
#include <iostream>
#include <cstdlib>

using namespace std;

int main(void) {
    int num;
    
    while (cin >> num) {
        int arr[1000] = {};
        int temp;
        
        for (int i = 0; i < num; i++) {
            cin >> temp;
            arr[i] = temp;
        }

        // for (int i = 0; i < num; i++) {
        //     cout << arr[i] << " ";
        // }

        // cout << "\n";

        for (int i = 0; i < num; i++) {
            int temp = i;

            for (int j = i; j < num; j++) {
                if (arr[temp] > arr[j]) {
                    int temp1 = arr[j];
                    arr[j] = arr[temp];
                    arr[temp] = temp1;
                }
            }
        }

        for (int i = 0; i < num; i++) {
            cout << arr[i] << " ";
        }

        cout << "\n";
    }

    return 0;
}
```
