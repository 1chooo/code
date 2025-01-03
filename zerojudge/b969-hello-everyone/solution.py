"""
Author: 1chooo<hugo970217@gmail.com>
Problem link: https://zerojudge.tw/ShowProblem?problemid=b969
Status: AC
"""

if __name__ == "__main__":
    names_input = str(input())
    greeting_message = str(input())

    names_list = names_input.split(" ")
    names_count = len(names_list)

    for i in range(names_count):
        print(f"{greeting_message}, {names_list[i]}")
