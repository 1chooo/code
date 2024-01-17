class Solution:
    def reverseBits(self, n: int) -> int:
        result = 0
        for _ in range(32):
            result = (result << 1) | (n & 1)  # Shift result to the left and add the least significant bit of n
            print(result)
            n >>= 1  # Shift n to the right
        return result


if __name__ == '__main__':
    solution = Solution()
    print(solution.reverseBits(0o00000010100101000001111010011100))
