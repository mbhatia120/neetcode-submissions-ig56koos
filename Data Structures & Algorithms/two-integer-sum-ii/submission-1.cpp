class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {
        int i = 0;
        int j = (int)n.size() - 1;
        while (i < j) {
            int sum = n[i] + n[j];
            if (sum == t) {
                return {i + 1, j + 1}; // 1-indexed
            } else if (sum < t) {
                ++i;
            } else {
                --j;
            }
        }
        return {};
    }
};
