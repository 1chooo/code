from typing import List

def removeElement(nums: List[int], val: int) -> int:
    k = 0
    for i in range(len(nums)):
        if nums[i] != val:
            nums[k] = nums[i]
            k += 1
    return k

def judge_remove_element():
    nums = [3, 2, 2, 3]
    val = 3
    expected_nums = [2, 2]
    expected_length = len(expected_nums)

    k = removeElement(nums, val)
    assert k == expected_length
    nums[:k] = sorted(nums[:k])
    for i in range(k):
        assert nums[i] == expected_nums[i]

    print("Judge test passed.")

# 執行 Judge 測試
judge_remove_element()
