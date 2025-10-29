class Solution {
public:
    string removeOuterParentheses(string s) {
        string res;
        int count = 0;
        for(char c : s){
            if(c == '('){ 
                count++;
                if(count > 1){
                    res += c;
                }
            }
            if(c == ')'){
                count--;
                if(count > 0){
                    res += c;
                }
            }
        }
        return res;
    }
};