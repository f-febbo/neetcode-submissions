class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();

        // find pivot = index of the minimum
        int l = 0, r = n - 1;
        while (l < r) {
            int mid = l + (r - l) / 2;
            if (nums[mid] > nums[r]) l = mid + 1;   // pivot strictly right
            else r = mid;                            // pivot at mid or left
        }
        int pivot = l;

        int hit = binarySearch(nums, 0, pivot - 1, target);
        if (hit != -1) return hit;
        return binarySearch(nums, pivot, n - 1, target);
    }

private:
    int binarySearch(const vector<int>& nums, int l, int r, int target) {
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (nums[mid] == target) return mid;
            else if (nums[mid] > target) r = mid - 1;
            else l = mid + 1;
        }
        return -1;
    }
};