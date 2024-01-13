#include <iostream>
#include <vector>
#include <unordered_map>

class Solution {
public:
	std::vector<int> twoSum(std::vector<int> &nums, int target) {

		if (nums.size() == 2)
			return {0, 1};

		std::unordered_map<int, int> hMap;

		for (int i = 0; i < nums.size(); i++) {
			if (hMap.find(nums[i]) != hMap.end())
				return {hMap[nums[i]], i};
			else
				hMap[target - nums[i]] = i;
		}

		return {};
	}
};

int main() {
	Solution sol;
	std::vector<int> nums = {2, 7, 11, 15};
	int target = 9;
	std::vector<int> result = sol.twoSum(nums, target);
	for (int i = 0; i < result.size(); i++)
	{
		std::cout << result[i] << " ";
	}
	std::cout << std::endl;
	return 0;
}
