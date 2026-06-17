class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ptr1 = 0, ptr2 = heights.size() - 1, maxArea = 0;

        while(ptr1 < ptr2){
            int area = min(heights[ptr1], heights[ptr2]) * (ptr2 - ptr1) ;
            maxArea = max(area, maxArea);
            if(heights[ptr1] < heights[ptr2]){
                ptr1++;
            } else if(heights[ptr1] > heights[ptr2]){
                ptr2--;
            } else {
                ptr1++;
            }
        }
        return maxArea;
    }
};
