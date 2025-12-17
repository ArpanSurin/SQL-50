class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> s;
        for (int i : asteroids) {
            if (i > 0) {
                s.push(i);
            } else {
                while (!s.empty() && s.top() > 0 && s.top() < -i) {
                    s.pop();
                }
                if (s.empty() || s.top() < 0) {
                    s.push(i);
                }
                if (!s.empty() && s.top() == -i) {
                    s.pop();
                }
            }
        }
        vector<int> arr;
        while(!s.empty()){
            arr.push_back(s.top());
            s.pop();
        }
        reverse(arr.begin(), arr.end());
        return arr;
    }
};