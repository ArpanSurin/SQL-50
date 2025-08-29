class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        for(int num=left; num<=right; num++){
            int valid = true;
            int temp = num;
            while(temp > 0){
                int dig = temp % 10;
                if(dig == 0 || num%dig != 0){
                    valid = false;
                    break;
                }
                temp /= 10;
            }
            if(valid) res.push_back(num);
        }
        return res;
    }
};