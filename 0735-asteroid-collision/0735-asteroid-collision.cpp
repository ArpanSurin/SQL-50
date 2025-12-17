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
        vector<int> arr(s.size());
        for (int i = arr.size() -1; i >= 0; i--) {
            arr[i] = s.top();
            s.pop();
        }
        return arr;
    }
};