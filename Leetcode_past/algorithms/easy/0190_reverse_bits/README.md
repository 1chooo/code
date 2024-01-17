# 190. Reverse Bits

Reverse bits of a given 32 bits unsigned integer.

**Note:**

- Note that in some languages, such as Java, there is no unsigned integer type. In this case, both input and output will be given as a signed integer type. They should not affect your implementation, as the integer's internal binary representation is the same, whether it is signed or unsigned.
- In Java, the compiler represents the signed integers using [2's complement notation](https://en.wikipedia.org/wiki/Two%27s_complement). Therefore, in Example 2 above, the input represents the signed integer `-3` and the output represents the signed integer `-1073741825`.
 

**Example 1:**

> Input: `n = 00000010100101000001111010011100`  
> Output:    `964176192 (00111001011110000010100101000000)`  
> Explanation: The input binary string `00000010100101000001111010011100` represents the unsigned integer `43261596`, so return `964176192` which its binary representation is `00111001011110000010100101000000`.


**Example 2:**

> Input: `n = 11111111111111111111111111111101`
> Output:   `3221225471 (10111111111111111111111111111111)`  
> Explanation: The input binary string `11111111111111111111111111111101` represents the unsigned integer `4294967293`, so return `3221225471` which its binary representation is `10111111111111111111111111111111`.
 

**Constraints:**

- The input must be a binary string of length 32
 

**Follow up:** If this function is called many times, how would you optimize it?


## Note

当处理 8 位二进制数字时，我们可以使用相同的逻辑来说明这两行代码：

假设我们有一个 8 位二进制数字 n，初始值为 10110101。我们要对其进行反转。
```python
n = 0b10110101  # 8-bit binary number (213 in decimal)

result = 0  # Initialize result

for _ in range(8):  # Iterate 8 times for 8 bits
    result = (result << 1) | (n & 1)  # Shift result to the left and add the least significant bit of n
    n >>= 1  # Shift n to the right

# Expected result after reversing: 10101101 (173 in decimal)
```

下面是每个迭代步骤的解释：

1. 迭代开始时，result 是 0，n 是 10110101。
2. 进入循环的第一次迭代：
   - (result << 1) 将 result 向左移动一位，结果仍为 0。
   - (n & 1) 获取 n 的最低位，即最右边的位，结果是 10110101 & 00000001 = 00000001，也就是 n 的最低位是 1。
   - | 运算符将前面移动后的 result 和 n 的最低位进行合并，结果为 00000000 | 00000001 = 00000001，这是新的反转结果。
   - n >>= 1 将 n 向右移动一位，结果为 1011010。
3. 迭代持续进行，每次迭代都会将 result 左移一位，同时添加 n 的最低位（每次的最低位都会成为反转后结果的最高位），直到处理完 8 个位。

最终，经过 8 次迭代后，result 的值为 10101101，这是对 10110101 进行颠倒后得到的结果。