class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> map; 
        for(int i=0; i<numbers.size(); i++){
            int j = target - numbers[i];
            if(map.find(j) != map.end()){
                return { map[j] + 1, i + 1};
            }
            map[numbers[i]] = i;
        }
        return {-1, -1};
    }
};