class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(vector<int>& nums : matrix){
            if(nums[0] <= target && target <= nums.back()){
                return search(nums, target) != -1;
            }
        }
        return false;
    }
    
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size();

        while(left < right){
            int mid = left + (right - left) / 2;

            if(nums[mid] == target) return mid;

            else if(nums[mid] > target) right = mid;
            
            else left = mid + 1;
        }
        return -1;
    }
};