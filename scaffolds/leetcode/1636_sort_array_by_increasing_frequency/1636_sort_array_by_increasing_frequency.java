class Solution {
    public int[] frequencySort(int[] nums) {
        Map<Integer, Integer> freq = new HashMap<>();
        Integer[] newNums = new Integer[nums.length];

        for (int i = 0; i < nums.length; i++) {
            freq.put(nums[i], freq.getOrDefault(nums[i], 0) + 1);
            newNums[i] = nums[i];
        }

        Arrays.sort(newNums, (n1, n2) -> {
            if (freq.get(n1) != freq.get(n2)) {
                // if freq of numbers are not equal then return in increasing order based on
                // freq.
                return freq.get(n1) - freq.get(n2);
            } else {
                // otherwise sort them in decreasing order based on number in nums.
                return n2 - n1;
            }
        });

        for (int i = 0; i < nums.length; i++) {
            nums[i] = newNums[i];
        }

        return nums;
    }
}

class Solution {
	public:
		vector<int> frequencySort(vector<int>& nums) {
			vector<int> count(201, 0);
			for (int num : nums) {
				count[num + 100]++;
			}
			sort(nums.begin(), nums.end(), [&](int a, int b) {
				if (count[a + 100] == count[b + 100])
					return a > b;
				return count[a + 100] < count[b + 100];
			});
			return nums;
		}
	};

