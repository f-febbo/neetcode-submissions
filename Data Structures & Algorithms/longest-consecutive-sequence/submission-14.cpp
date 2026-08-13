class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        size_t longest = 0;

        for(const int& n : numSet){
            if(numSet.find(n - 1) == numSet.end()){
                size_t length = 1;
                while(numSet.find(n + length) != numSet.end()){
                    length++;
                }
                longest = max(longest, length);
            }
        }
        return longest;
    }
};
