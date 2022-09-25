class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_set<int> indexes_used;
        for(int i = 0; i < nums.size(); ++i)
        {
            for(int j = 0; j < nums.size(); ++j)
            {
                int sum = nums[i] + nums[j];
                if(i != j && sum == target)
                    return {i, j};
            }
        }
        return {};
    }
};
