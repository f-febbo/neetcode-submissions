class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size(), 1);
        
        uint32_t prefix = 1;
        for(auto i{0uz}; i < nums.size(); i++){
            result[i] = prefix;
            prefix *= nums[i];
        }
        uint32_t postfix = 1;
        for(auto j{nums.size()}; j-- > 0;){
            result[j] *= postfix;
            postfix *= nums[j];
        }
        return result;
        
    }
};
