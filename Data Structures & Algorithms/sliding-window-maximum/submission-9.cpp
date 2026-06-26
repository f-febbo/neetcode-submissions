class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> res(nums.size() - k + 1);
        deque<int> window; // indices

        int l = 0, r = 0;

        while(r < nums.size()){
            while(!window.empty() && nums[window.back()] < nums[r]) window.pop_back();

            window.push_back(r);

            if(l > window.front()){
                window.pop_front();
            }
            
            if((r + 1) >= k){
                res[l] = nums[window.front()];
                l++;
            }
            r++;
        }

        return res;
    }
};
