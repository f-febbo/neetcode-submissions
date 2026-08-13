class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size(), 1);
        
        int prefix = 1;
        for(auto i{0uz}; i < nums.size(); ++i){
            result[i] = prefix;
            prefix *= nums[i];
        }
        int postfix = 1;
        for(auto j{nums.size()}; j-- > 0;){
            result[j] *= postfix;
            postfix *= nums[j];
        }
        return result;
        
    }
};
