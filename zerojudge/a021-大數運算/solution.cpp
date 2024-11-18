/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://zerojudge.tw/ShowProblem?problemid=a021
 * Status: AC
 */

#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <stack>
#include <vector>
// #include <bits/stdc++.h>

#define MAX_SIZE 1000

using namespace std;

class BigNumber {
  private:
    char arr[MAX_SIZE];
    int length;
    bool negative;
    void push(char);
    char pop();
    void insert(char, int);
    char erase(int);
    void stripZero();
    void swap(BigNumber &, BigNumber &);
    BigNumber subArray(int, int);

  public:
    BigNumber();
    BigNumber(const string &);
    BigNumber operator=(string &);
    BigNumber operator+(BigNumber);
    BigNumber operator-(BigNumber);
    BigNumber operator*(BigNumber);
    BigNumber operator/(BigNumber);
    bool operator>(BigNumber);
    bool operator<(BigNumber);
    bool operator==(BigNumber);
    bool operator>=(BigNumber);
    bool operator<=(BigNumber);
    friend istream &operator>>(istream &, BigNumber &);
    friend ostream &operator<<(ostream &, BigNumber);
};

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    BigNumber num1, num2;
    char opr;

    cin >> num1 >> opr >> num2;

    switch (opr) {
    case '+':
        cout << num1 + num2;
        break;
    case '-':
        cout << num1 - num2;
        break;
    case '*':
        cout << num1 * num2;
        break;
    case '/':
        cout << num1 / num2;
        break;
    default:
        break;
    }

    cout << "\n";

    return 0;
}

BigNumber::BigNumber() {
    memset(arr, 0, MAX_SIZE);
    length = 1;
    negative = false;
}

BigNumber::BigNumber(const string &in) {
    memset(arr, 0, MAX_SIZE);
    length = 0;
    negative = false;

    for (auto iterator = in.rbegin(); iterator != in.rend(); iterator++) {
        push(*iterator - 48);
    }
}

void BigNumber::push(char in) {
    arr[length++] = in;

    return;
}

char BigNumber::pop() {
    char temp = arr[--length];
    arr[length] = 0;

    return temp;
}

void BigNumber::swap(BigNumber &num1, BigNumber &num2) {
    BigNumber res = num1;
    num1 = num2, num2 = res;

    return;
}

void BigNumber::insert(char in, int index) {
    for (int i = length++; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index] = in;

    return;
}

char BigNumber::erase(int index) {
    char temp = arr[index];
    length--;

    for (int i = index; i < length; i++) {
        arr[i] = arr[i + 1];
    }
    arr[length] = 0;

    return temp;
}

void BigNumber::stripZero() {
    for (int i = length - 1; i > 0; i--) {
        if ((*this).arr[i] != 0) return;
        pop();
    }

    return;
}

BigNumber BigNumber::subArray(int begin, int len) {
    BigNumber temp;

    for (int i = 0; i < len; i++) {
        temp.push((*this).arr[begin + i]);
    }

    return temp;
}

BigNumber BigNumber::operator=(string &str) {
    return BigNumber(str);
}

BigNumber BigNumber::operator+(BigNumber object) {
    BigNumber temp = *this;
    char carry = 0;

    while (temp.length > object.length)
        object.push(0);
    while (temp.length < object.length)
        temp.push(0);
    for (int i = 0; i < temp.length; i++) {
        temp.arr[i] += object.arr[i] + carry;
        carry = temp.arr[i] >= 10;
        temp.arr[i] -= 10 * carry;
    }
    temp.stripZero();

    return temp;
}

BigNumber BigNumber::operator-(BigNumber object) {
    BigNumber temp = *this;
    char borrow = 0;

    while (temp.length > object.length)
        object.push(0);
    while (temp.length < object.length)
        temp.push(0);

    if (temp < object) {
        swap(temp, object);
        temp.negative = true;
    }

    for (int i = 0; i < temp.length; i++) {
        temp.arr[i] -= object.arr[i] + borrow;
        borrow = temp.arr[i] < 0;
        temp.arr[i] += 10 * borrow;
    }
    temp.stripZero();

    return temp;
}

BigNumber BigNumber::operator*(BigNumber object) {
    BigNumber temp = *this, res;
    char carry = 0;

    res.length = temp.length + object.length;

    for (int i = 0; i < temp.length; i++) {
        for (int j = 0; j <= object.length; j++) {
            res.arr[i + j] += temp.arr[i] * object.arr[j] + carry;
            carry = res.arr[i + j] / 10;
            res.arr[i + j] %= 10;
        }
    }
    res.stripZero();

    return res;
}

BigNumber BigNumber::operator/(BigNumber object) {
    BigNumber temp = *this, max_div = object, res;

    while (object.length < temp.length)
        object.insert(0, 0);
    while (temp >= max_div) {
        for (int times = 1; times <= 10; times++) {
            if (object * BigNumber(to_string(times)) > temp) {
                res.push(--times);
                temp = temp - object * BigNumber(to_string(times));
                object.erase(0);
                break;
            }
        }
    }
    reverse(res.arr, res.arr + res.length);
    res.stripZero();

    return res;
}

bool BigNumber::operator>(BigNumber object) {
    BigNumber temp = *this;

    while (temp.length > object.length)
        object.push(0);
    while (temp.length < object.length)
        temp.push(0);
    for (int i = temp.length - 1; i >= 0; i--) {
        if (temp.arr[i] > object.arr[i]) return true;
        if (temp.arr[i] < object.arr[i]) return false;
    }

    return false;
}

bool BigNumber::operator<(BigNumber object) {
    BigNumber temp = *this;

    while (temp.length > object.length)
        object.push(0);
    while (temp.length < object.length)
        temp.push(0);
    for (int i = temp.length - 1; i >= 0; i--) {
        if (temp.arr[i] < object.arr[i]) return true;
        if (temp.arr[i] > object.arr[i]) return false;
    }

    return false;
}

bool BigNumber::operator==(BigNumber object) {
    return !(*this > object) && !(*this < object);
}

bool BigNumber::operator>=(BigNumber object) {
    return *this > object || *this == object;
}

bool BigNumber::operator<=(BigNumber object) {
    return *this < object || *this == object;
}

istream &operator>>(istream &is, BigNumber &object) {
    string str;
    is >> str;
    object = BigNumber(str);
    object.stripZero();

    return is;
}

ostream &operator<<(ostream &os, BigNumber object) {
    if (object.negative) os << "-";
    for (int i = object.length - 1; i >= 0; i--) {
        os << char(object.arr[i] + 48);
    }

    return os;
}
