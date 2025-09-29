class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int p1 = 0;
        for(int p2=1; p2<nums.size(); p2++){
            if(nums[p2] != nums[p1]){
                p1++;
                nums[p1] = nums[p2];
            }
        }
        return p1+1;
    }
};