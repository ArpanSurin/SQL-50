class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> map;
        for(int n : arr){
            map[n]++;
        }
        unordered_set<int> set;
        for(auto& n : map){
            int occur = n.second;
            if(set.find(occur) != set.end()){
                return false;
            }
            set.insert(occur);
        }
        return true;
    }
};