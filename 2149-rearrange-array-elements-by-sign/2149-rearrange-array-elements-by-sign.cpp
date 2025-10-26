class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size());
        int i = 0, j = 1;
        for (int n : nums) {
            if (n > 0) ans[i] = n, i += 2;
            else ans[j] = n, j += 2;
        }
        return ans;
    }
};