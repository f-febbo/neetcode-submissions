class Solution {
public:
    bool isPalindrome(string s) {
        int ptr1 = 0;
        int ptr2 = s.length() - 1;

        while(ptr1 < ptr2){
            while(ptr1 < ptr2 && !isalnum(s[ptr1])) ptr1++;
            while(ptr2 > ptr1 && !isalnum(s[ptr2])) ptr2--;
            
            if(tolower(s[ptr1]) != tolower(s[ptr2])) return false;
            
            ptr1++; ptr2--;
        }
        return true;
    }
};
