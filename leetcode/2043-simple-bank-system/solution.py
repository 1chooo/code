"""
* Author: Lin Hugo<hugo@1chooo.com>
* Problem: https://leetcode.com/problems/simple-bank-system
* Runtime: 19ms (92.79%)
"""


class Bank:
    def __init__(self, balance: List[int]):
        self.balance = balance
        self.n = len(balance)

    def _valid(self, account: int) -> bool:
        return 1 <= account and account <= self.n

    def transfer(self, account1: int, account2: int, money: int) -> bool:
        if (
            not self._valid(account1)
            or not self._valid(account2)
            or self.balance[account1 - 1] < money
        ):
            return False

        self.balance[account1 - 1] -= money
        self.balance[account2 - 1] += money

        return True

    def deposit(self, account: int, money: int) -> bool:
        if not self._valid(account):
            return False

        self.balance[account - 1] += money

        return True

    def withdraw(self, account: int, money: int) -> bool:
        if not self._valid(account) or self.balance[account - 1] < money:
            return False

        self.balance[account - 1] -= money

        return True


# Your Bank object will be instantiated and called as such:
# obj = Bank(balance)
# param_1 = obj.transfer(account1,account2,money)
# param_2 = obj.deposit(account,money)
# param_3 = obj.withdraw(account,money)
