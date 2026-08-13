class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;

        for(int i : nums) count[i]++;
        
        vector<vector<int>> pairs(nums.size() + 1);

        for(auto& [e, c] : count){
            pairs[c].push_back(e);
        }

        vector<int> result;
        for(int i = pairs.size() - 1; i > 0; i--){
            for(int n : pairs[i]){
                result.push_back(n);
                if(result.size() == k) {
                    return result;
                }
            }
        }
        return result;
    }
};
