class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size();
        int b = t.size();

        unordered_map<char,int> mp;
        for(char c : t) mp[c]++;

        int l = 0;
        int cnt = 0;

        int ans = INT_MAX;
        int start = 0;

        for(int r = 0; r < n; r++) {
            if(mp.count(s[r])) {
                if(mp[s[r]] > 0) {
                    cnt++;
                }
                mp[s[r]]--;
            }

            while(cnt == b) {
                // current window is valid
                if(r - l + 1 < ans) {
                    ans = r - l + 1;
                    start = l;
                }

                // now remove s[l]
                if(mp.count(s[l])) {
                    mp[s[l]]++;

                    if(mp[s[l]] > 0) {
                        cnt--;
                    }
                }

                l++;
            }
        }

        if(ans == INT_MAX) return "";

        return s.substr(start, ans);
    }
};
