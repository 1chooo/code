#include <cstdio>
using namespace std;

int main() {
    int T, N, P, h[101]; // T: number of cases, N: number of days
                         // P: number of parties, h[i]: hartal parameter for party i
    scanf("%d", &T);
    while (T--) {
        scanf("%d%d", &N, &P);
        for (int i = 0; i < P; i++)
            scanf("%d", &h[i]);
        int hartal = 0;
        for (int i = 1; i <= N; i++) {
            if (i % 7 == 6) { // 跳過星期五和星期六
                i++;
                continue;
            }
            for (int j = 0; j < P; j++) {
                if (i % h[j] == 0) {
                    hartal++;
                    break;
                }
            }
        }
        printf("%d\n", hartal);
    }
    return 0;
}