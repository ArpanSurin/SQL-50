class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> map;
        for(int i=0; i<nums.size(); i++){
            map.push_back({ nums[i], i });
        }
        sort(map.begin(), map.end());
        int left = 0, right = nums.size() - 1;
        while(left < right){
            int sum = map[left].first + map[right].first;
            if(sum == target){
                return { map[left].second, map[right].second};
            }
            if (sum < target) ++left;
            if(sum > target) --right;
        }
        return {-1, -1};
    }
};