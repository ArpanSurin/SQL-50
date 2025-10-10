class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string temp;
        vector<string> words;

        while(ss >> temp){
            words.push_back(temp);
        }

        string res;
        for(int i = words.size()-1; i>=0; i--){
            res += words[i];
            if(i != 0){
                res += " ";
            }
        }
        return res;
    }
};