class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> pairs;
        for(auto i{0uz}; i < position.size(); ++i){
            pairs.push_back({position[i], speed[i]});
        }

        sort(pairs.rbegin(), pairs.rend());
        vector<double> st;

        for(const auto& pair : pairs){
            st.push_back((double)(target - pair.first) / pair.second);
            if(st.size() >= 2 && st.back() <= st[st.size() - 2]){
                st.pop_back();
            }
        }
        return st.size();
    }
};
