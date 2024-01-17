def find_fourth_point(x1, y1, x2, y2, x3, y3, x4, y4):
    if x1 == x3 and y1 == y3: # 檢查點1和點3是否相同（即它們是重複的點）
        return f"{(x2 + x4) - x1:.3f} {(y2 + y4) - y1:.3f}"
    elif x1 == x4 and y1 == y4: # 檢查點1和點4是否相同
        return f"{(x2 + x3) - x1:.3f} {(y2 + y3) - y1:.3f}"
    elif x2 == x3 and y2 == y3: # 檢查點2和點3是否相同
        return f"{(x1 + x4) - x2:.3f} {(y1 + y4) - y2:.3f}"
    else: # 如果上述條件都不符合，則點2和點4是中點
        return f"{(x1 + x3) - x2:.3f} {(y1 + y3) - y2:.3f}"


def main():
    while True:
        try:
            x1, y1, x2, y2, x3, y3, x4, y4 = map(float, input().split())
            print(find_fourth_point(x1, y1, x2, y2, x3, y3, x4, y4))
        except EOFError:
            break

if __name__ == "__main__":
    main()
