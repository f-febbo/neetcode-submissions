class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<string>> res;

        for(auto i : strs){
            vector<int> count(26, 0);
            for(auto j : i){
                count[int(j) - int('a')]++;
            }
            res[count].push_back(i);
        }

        vector<vector<string>> result;
        for (auto const& [key, val] : res) {
            result.push_back(val);
        }
        return result;
    }
};
