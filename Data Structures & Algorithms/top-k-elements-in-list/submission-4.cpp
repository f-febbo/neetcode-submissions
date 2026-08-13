class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        vector<vector<int>> pairs(nums.size() + 1);

        for(int i : nums){
            count[i]++;
        }
        
        for(const auto& entry : count){
            pairs[entry.second].push_back(entry.first);
        }

        vector<int> result;
        for(auto i{pairs.size() - 1}; i > 0; --i){
            for(int n : pairs[i]){
                result.push_back(n);
                if(result.size() == k) {
                    return result;
                }
            }
        }
    }
};
