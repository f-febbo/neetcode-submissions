class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> sums;
        for(int i = 0; i < numbers.size(); i++){
            int residual = target - numbers[i];
            if(sums.count(residual)){
                return { sums[residual], i + 1};
            }
            sums[numbers[i]] = i + 1;
        }
        return {};
    }
};
