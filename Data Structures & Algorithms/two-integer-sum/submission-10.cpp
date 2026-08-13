class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> sums;

        for(int i = 0; i < nums.size(); i++){
            int diff = target - nums[i];
            if(sums.contains(diff)){
                return {sums[diff], i};
            }
            sums[nums[i]] = i;
        }
        return {};
    }
};
