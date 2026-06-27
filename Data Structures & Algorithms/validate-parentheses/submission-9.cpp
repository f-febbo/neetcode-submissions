class Solution {
public:
    bool isValid(string s) {
       stack<char> paraStack;
       unordered_map<char, char> paraMap = {
        {')','(' },
        {']','['},
        {'}','{'}};

        for(const char& c : s){
            if(paraMap.count(c)){
                if(!paraStack.empty() && paraStack.top() == paraMap[c]){
                    paraStack.pop();
                } else {
                    return false;
                }
            } else {
                paraStack.push(c);
            }
        }
        return paraStack.empty();
    }
};
