class Solution:
    def canAliceWin(self, nums: List[int]) -> bool:

        single_digit_nums = [num for num in nums if num < 10]
        double_digit_nums = [num for num in nums if num >= 10]

        sum_single_digits = sum(single_digit_nums)
        sum_double_digits = sum(double_digit_nums)

        if sum_single_digits > sum_double_digits or sum_double_digits > sum_single_digits:
            return True


        return False
