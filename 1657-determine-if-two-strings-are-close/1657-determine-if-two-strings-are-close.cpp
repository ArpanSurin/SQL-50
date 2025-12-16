class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if (word1.size() != word2.size()) {
            return false;
        }
        unordered_map<char, int> map1;
        unordered_map<char, int> map2;
        for (char c : word1) {
            map1[c]++;
        }
        for (char c : word2) {
            map2[c]++;
        }

        for (auto& n : map1) {
            // int occur = n.second;
            if (map2.find(n.first) != map2.end()) {
                if (map2.find(n.second) != map2.end()) {
                    return false;
                }
            }
        }
        return true;
    }
};