# 10221 Satellites

The radius of Earth is 6440 kilometers. There are many satellites and asteroids moving around the Earth. If two satellites create an angle with the center of Earth, can you find out the distance between them? By distance, we mean both the arc and chord distances. Both satellites are on the same orbit (however, please consider that they are revolving on a circular path rather than an elliptical path).

## Input

The input file will contain one or more test cases. Each test case consists of one line containing two integers `s` and `a`, and a string `min` or `deg`. Here `s` is the distance of the satellite from the surface of the Earth and `a` is the angle that the satellites make with the center of Earth. It may be in minutes (′) or in degrees (◦). Remember that the same line will never contain minute and degree at a time.

## Output

For each test case, print one line containing the required distances, i.e., both arc distance and chord distance respectively between two satellites in kilometers. The distance will be a floating-point value with six digits after the decimal point.

## Sample Input

```
500 30 deg
700 60 min
200 45 deg
```

## Sample Output

```
3633.775503 3592.408346
124.616509 124.614927
5215.043805 5082.035982
```
