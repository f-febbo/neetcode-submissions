class Solution {
public:
    int trap(vector<int>& height) {
        int ptr1 = 0, ptr2 = height.size() - 1, res = 0;
        int maxL = height[ptr1], maxR = height[ptr2];

        while (ptr1 < ptr2){
            int area;
            if(maxR < maxL){
                area = min(maxL, maxR) - height[ptr2];
                ptr2--;
            } else {
                area = min(maxL, maxR) - height[ptr1];
                ptr1++;
            }
            if(area >= 0){
                res += area;
            }
            maxL = max(height[ptr1], maxL), maxR = max(height[ptr2], maxR);
        }
        return res;
    }
};
