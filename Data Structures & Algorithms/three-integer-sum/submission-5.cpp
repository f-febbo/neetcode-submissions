class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;

        sort(nums.begin(), nums.end());

        for(auto i{0uz}; i < nums.size(); ++i){
            int val = nums[i];
            if(i > 0 && val == nums[i - 1]){
                continue;
            }
            int ptr1 = i + 1, ptr2 = nums.size() - 1;
            while(ptr1 < ptr2){
                int sum = val + nums[ptr1] + nums[ptr2];
                if (sum > 0){
                    ptr2--;
                } else if (sum < 0){
                    ptr1++;
                } else {
                    result.push_back({val, nums[ptr1], nums[ptr2]});
                    ptr1++;
                    while (nums[ptr1] == nums[ptr1 - 1] && ptr1 < ptr2) ptr1++;
                }
            }
        }
        return result;
    }
};
