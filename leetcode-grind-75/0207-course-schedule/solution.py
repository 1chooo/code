"""
* Author: Lin Hugo<hugo@1chooo.com>
* Problem: https://leetcode.com/problems/course-schedule
* Runtime: 3ms (87.94%)
"""

from typing import List
from collections import deque


class Solution:
    def canFinish(self, numCourses: int, prerequisites: List[List[int]]) -> bool:
        graph = [[] for _ in range(numCourses)]

        for course, prereq in prerequisites:
            graph[prereq].append(course)

        visited = [False] * numCourses  # fully processed
        visiting = [False] * numCourses  # recursion stack

        def dfs(course):
            if visiting[course]:  # cycle found
                return False
            if visited[course]:  # already checked, safe
                return True

            visiting[course] = True

            for neighbor in graph[course]:
                if not dfs(neighbor):
                    return False

            visiting[course] = False
            visited[course] = True
            return True

        for course in range(numCourses):
            if not dfs(course):
                return False

        return True


"""
* Author: Lin Hugo<hugo@1chooo.com>
* Problem: https://leetcode.com/problems/course-schedule
* Runtime: 4ms (67.01%)
"""


class Solution2:
    def canFinish(self, numCourses: int, prerequisites: List[List[int]]) -> bool:
        graph = [[] for _ in range(numCourses)]
        indegree = [0] * numCourses  # in-degree 0 can be taken immediately

        for course, prereq in prerequisites:
            graph[prereq].append(course)
            indegree[course] += 1

        queue = deque([i for i in range(numCourses) if indegree[i] == 0])

        taken = 0

        while queue:
            course = queue.popleft()
            taken += 1

            for next_course in graph[course]:
                indegree[next_course] -= 1
                if indegree[next_course] == 0:
                    queue.append(next_course)

        return taken == numCourses
