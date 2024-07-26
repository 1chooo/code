#include <iomanip>
#include <iostream>
using namespace std;

void cal(long long x) {
    if (x / 10000000 != 0) {
        cal(x / 10000000); // 處理不是最高位那組
                           // 或是輸出數字，下同
        cout << " kuti";   // 輸出單位
        x = x % 10000000;  // 去掉前面的數字，下同
    }

    if (x / 100000 != 0) {
        cal(x / 100000);
        cout << " lakh";
        x = x % 100000;
    }

    if (x / 1000 != 0) {
        cal(x / 1000);
        cout << " hajar";
        x = x % 1000;
    }

    if (x / 100 != 0) {
        cal(x / 100);
        cout << " shata";
        x = x % 100;
    }

    if (x != 0) {
        cout << " " << x; // 輸出數字
    }
}

int main() {
    long long num, count = 1;

    while (cin >> num) // 輸入數字
    {
        cout << setw(4) << count << "."; // 輸出標題數字
        cal(num);                        // 呼叫函式

        if (num == 0) // 若輸入為0
        {             // 則輸出0
            cout << " 0";
        }

        count = count + 1; // 計算次數
        cout << endl;      // 記得換行
    }
}