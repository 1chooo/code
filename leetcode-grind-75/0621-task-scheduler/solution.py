"""
* Author: Lin Hugo<hugo@1chooo.com>
* Problem: https://leetcode.com/problems/task-scheduler
* Runtime: 22ms (81.31%)
"""

from typing import List


class Solution:
    def leastInterval(self, tasks: List[str], n: int) -> int:
        task_counts = [0] * 26
        for task in tasks:
            task_counts[ord(task) - ord("A")] += 1

        max_count = max(task_counts)
        max_count_tasks = task_counts.count(max_count)

        part_count = max_count - 1
        part_length = n - (max_count_tasks - 1)
        empty_slots = part_count * part_length
        available_tasks = len(tasks) - max_count * max_count_tasks
        idles = max(0, empty_slots - available_tasks)

        return len(tasks) + idles


class Solution2:
    def leastInterval(self, tasks: List[str], n: int) -> int:
        freq = [0] * 26
        for task in tasks:
            freq[ord(task) - ord("A")] += 1
        freq.sort()
        chunk = freq[25] - 1
        idle = chunk * n

        for i in range(24, -1, -1):
            idle -= min(chunk, freq[i])

        return len(tasks) + idle if idle >= 0 else len(tasks)
