"""
* Author: Lin Hugo<hugo@1chooo.com>
* Problem: https://leetcode.com/problems/accounts-merge
* Runtime: 39ms (37.09%)
"""

from collections import defaultdict
from typing import List


class Solution:
    def accountsMerge(self, accounts: List[List[str]]) -> List[List[str]]:

        parent = {}

        def _find(email):
            if parent[email] != email:
                parent[email] = _find(parent[email])

            return parent[email]

        def _union(a, b):
            parent[_find(b)] = _find(a)

        email_to_name = {}

        for account in accounts:
            name = account[0]
            first_email = account[1]

            for email in account[1:]:
                if email not in parent:
                    parent[email] = email

                email_to_name[email] = name

            for email in account[2:]:
                _union(first_email, email)

        groups = defaultdict(list)

        for email in parent:
            root = _find(email)
            groups[root].append(email)

        res = []

        for root, emails in groups.items():
            res.append([email_to_name[root]] + sorted(emails))

        return res
