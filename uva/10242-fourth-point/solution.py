"""
Author: 1chooo<hugo970217@gmail.com>
Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1183
Status: AC
"""


def find_fourth_point(
    x1: float,
    y1: float,
    x2: float,
    y2: float,
    x3: float,
    y3: float,
    x4: float,
    y4: float,
) -> str:
    if x1 == x3 and y1 == y3:
        return f"{(x2 + x4) - x1:.3f} {(y2 + y4) - y1:.3f}"
    elif x1 == x4 and y1 == y4:
        return f"{(x2 + x3) - x1:.3f} {(y2 + y3) - y1:.3f}"
    elif x2 == x3 and y2 == y3:
        return f"{(x1 + x4) - x2:.3f} {(y1 + y4) - y2:.3f}"
    else:
        return f"{(x1 + x3) - x2:.3f} {(y1 + y3) - y2:.3f}"


def main() -> None:
    while True:
        try:
            x1, y1, x2, y2, x3, y3, x4, y4 = map(float, input().split())
            result = find_fourth_point(x1, y1, x2, y2, x3, y3, x4, y4)
            print(result)
        except EOFError:
            break


if __name__ == "__main__":
    main()
