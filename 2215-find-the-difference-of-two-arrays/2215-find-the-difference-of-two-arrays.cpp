class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());

        vector<vector<int>> result(2);
        for(int i : set1){
            if(set2.find(i) == set2.end()){
                result[0].push_back(i);
            }
        }
        for(int n : set2){
            if(set1.find(n) == set1.end()){
                result[1].push_back(n);
            }
        }
        return result;
    }
};