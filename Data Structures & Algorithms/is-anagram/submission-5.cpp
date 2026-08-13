class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }

        unordered_map<char, int> lettersS;
        unordered_map<char, int> lettersT;

        for(auto i = 0; i < s.length(); i++){
            lettersS[s[i]]++;
            lettersT[t[i]]++;
        }

        return lettersS == lettersT;
        
    }
};
