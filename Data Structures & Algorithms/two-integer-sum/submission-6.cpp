class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> sums;
        for(auto i{0}; i < nums.size(); ++i){
            auto diff = target - nums[i];
            if(sums.find(diff) != sums.end()){
                return {sums[diff], i};
            }
            sums.insert({nums[i], i});
        }
        return {};
    }
};
