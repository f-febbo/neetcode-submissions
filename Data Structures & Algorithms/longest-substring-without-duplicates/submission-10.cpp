class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;
        int l = 0, res = 0;

        for(auto r = 0; r < s.length(); ++r){
            while(seen.contains(s[r])){
                seen.erase(s[l]);
                l++;
            }
            seen.insert(s[r]);
            res = max(res, r - l + 1);
        }
        return res;
    }
};
