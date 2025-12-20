class Solution {
public:
    bool checkValidString(string s) {
        int n = s.size() - 1;
        int open = 0;
        int close = 0;
        for(int i=0; i<=n; i++){
           // pointer 1;
           if(s[i] == '(' || s[i] == '*'){
            open++;
           }else{
            open--;
           }
           //pointer 2;
           if(s[n-i] == ')' || s[n-i] == '*'){
            close++;
           }else{
            close--;
           }
           if(open < 0 || close < 0) return false;
        }
        return true;
    }
};