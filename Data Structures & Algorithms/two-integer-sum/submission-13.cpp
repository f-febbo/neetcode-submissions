class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> sums;
        
        for(auto i{0}; i < nums.size(); ++i){
            auto diff = target - nums[i];
            if(sums.contains(diff)){
                return {sums[diff], i};
            }
            sums[nums[i]] = i;
        }
        return {};
    }
};
