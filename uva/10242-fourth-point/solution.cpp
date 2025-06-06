/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1183
 * Status: AC
 */

#include <iostream>

using namespace std;

int main(void) {
    double pointX[4] = {0.0};
    double pointY[4] = {0.0};

    while (cin >> pointX[0] >> pointY[0]) {
        int index[2]; // the index of overlapping point
        double firstX = 0.0;
        double firstY = 0.0;
        double thirdX = 0.0;
        double thirdY = 0.0;

        for (int i = 1; i < 4; i++) {
            cin >> pointX[i] >> pointY[i];
        }

        // find the overlappig point
        for (int i = 0; i < 4; i++) {
            for (int j = i + 1; j < 4; j++) {
                if (pointX[i] == pointX[j] &&
                    pointY[i] == pointY[j]) {
                    index[0] = i;
                    index[1] = j;
                }
            }
        }

        double secondX = pointX[index[0]];
        double secondY = pointY[index[0]];

        int tmp = 1;
        for (int i = 0; i < 4; i++) {
            if (i != index[0] && i != index[1]) {
                if (tmp == 1) {
                    firstX = pointX[i];
                    firstY = pointY[i];
                } else {
                    thirdX = pointX[i];
                    thirdY = pointY[i];
                }
                tmp++;
            }
        }

        double vector1_X = firstX - secondX;
        double vector1_Y = firstY - secondY;
        double vector2_X = thirdX - secondX;
        double vector2_Y = thirdY - secondY;

        double fourthX = secondX + vector1_X + vector2_X;
        double fourthY = secondY + vector1_Y + vector2_Y;

        printf("%.3f %.3f\n", fourthX, fourthY);
    }

    return 0;
}

/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1183
 * Status: AC
 */

#include <iomanip>
#include <iostream>

using namespace std;

typedef struct pnode {
    double x;
    double y;

    pnode(double a, double b) {
        x = a;
        y = b;
    }

    pnode() {}
} point;

int main(void) {
    point a;
    point b;
    point c;
    point d;

    while (cin >> a.x >> a.y >> b.x >> b.y) {
        cin >> c.x >> c.y >> d.x >> d.y;
        if (a.x == c.x && a.y == c.y)
            swap(a, b);
        if (a.x == d.x && a.y == d.y) {
            swap(a, b);
            swap(c, d);
        }
        if (b.x == d.x && b.y == d.y)
            swap(c, d);
        point e = point((a.x + d.x - c.x), (a.y + d.y - c.y));

        cout << fixed;
        cout << setprecision(3);
        cout << e.x << " " << e.y << endl;
    }

    return 0;
}
