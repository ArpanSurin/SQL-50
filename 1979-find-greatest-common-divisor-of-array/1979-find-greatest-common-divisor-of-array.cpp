class Solution {
public:
    int findGCD(vector<int>& nums) {
        int large = *max_element(nums.begin(), nums.end());
        int small = *min_element(nums.begin(), nums.end());
        return (gcd(large, small));
    }
};