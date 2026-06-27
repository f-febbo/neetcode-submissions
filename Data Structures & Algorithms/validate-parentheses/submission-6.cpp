class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else {
                char open = (c == ')') ? '(' : (c == ']') ? '[' : '{';
                if (st.empty() || st.top() != open) return false;
                st.pop();
            }
        }
        return st.empty();
    }
};