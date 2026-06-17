class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0, r = 1, res = 0;
        
        while (r < prices.size()){
            if(prices[l] < prices[r]){
                res = max(prices[r] - prices[l], res);
            } else l = r;
            r++;
        }
        return res;
    }
};
