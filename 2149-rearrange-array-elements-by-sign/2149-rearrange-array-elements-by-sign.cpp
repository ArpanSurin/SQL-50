class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        int pos = 0;
        int neg = 1;
        for(int n : nums){
            if(n > 0){
                result[pos] = n;
                pos += 2;
            }
            else{
                result[neg] = n;
                neg += 2;
            }
        }
        return result;
    }
};