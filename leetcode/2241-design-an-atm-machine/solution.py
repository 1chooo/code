"""
* Author: Lin Hugo <hugo@1chooo.com>
* Problem: https://leetcode.com/problems/design-an-atm-machine
* Runtime: 20ms (88.27%)
"""


class ATM:
    def __init__(self):
        self.banknoteCounts = [0] * 5
        self.banknoteValues = [20, 50, 100, 200, 500]

    def deposit(self, depositCounts: List[int]) -> None:
        for i in range(5):
            self.banknoteCounts[i] += depositCounts[i]

    def withdraw(self, amount: int) -> List[int]:
        withdrawnCounts = [0] * 5

        # Try to use largest banknotes first
        for i in range(4, -1, -1):
            value = self.banknoteValues[i]
            maxWithdrawable = min(self.banknoteCounts[i], amount // value)
            withdrawnCounts[i] = maxWithdrawable
            amount -= maxWithdrawable * value

        if amount > 0:
            return [-1]

        # Commit withdrawal
        for i in range(5):
            self.banknoteCounts[i] -= withdrawnCounts[i]

        return withdrawnCounts


# Your ATM object will be instantiated and called as such:
# obj = ATM()
# obj.deposit(banknotesCount)
# param_2 = obj.withdraw(amount)
