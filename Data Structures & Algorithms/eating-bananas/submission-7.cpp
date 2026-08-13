class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1, r = *max_element(piles.begin(), piles.end());
        int res = r;

        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (canEat(piles, mid, h)) {
                res = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return res;
    }

private:
    bool canEat(const vector<int>& piles, int rate, int h) {
        long long hours = 0;
        for (int bananas : piles) {
            hours += (bananas + rate - 1) / rate;
            if (hours > h) return false;   // early exit
        }
        return true;
    }
};