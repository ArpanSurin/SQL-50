class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != 0){
                if(i != n){
                    swap(nums[i], nums[n]);
                }
                n++;
            }
        }
    }
};