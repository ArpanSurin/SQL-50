class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<pair<int, int>> map;

        for(int i=0; i<numbers.size(); i++){
            map.push_back({ numbers[i], i });
        }

        sort(map.begin(), map.end());

        int left = 0, right = numbers.size() - 1;
        while(left < right){
            
            int sum = map[left].first + map[right].first;
            if(sum == target){
                return { map[left].second + 1, map[right].second + 1};
            }
            if (sum < target) ++left;
            if(sum > target) --right;
        }
        return {-1, -1};
    }
};