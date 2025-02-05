/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1162
 * Status: AC
 */

#include <math.h>
#include <stdio.h>

double PI = atan(1) * 4;

int main() {
    char unit[10];
    double radius;
    double angle;
    double arcLength;
    double chordLength;

    while (scanf("%lf %lf %s", &radius, &angle, &unit) != EOF) {

        if (unit[0] == 'm')
            angle /= 60; // Convert minutes to degrees

        angle = fmod(angle, 360);
        if (angle > 180)
            angle = 360 - angle; // Use the smaller angle

        arcLength = 2 * PI * (radius + 6440) * (angle / 360);
        chordLength = 2 * (radius + 6440) * sin(angle * PI / 360);

        printf("%.6lf %.6lf\n", arcLength, chordLength);
    }
    return 0;
}
