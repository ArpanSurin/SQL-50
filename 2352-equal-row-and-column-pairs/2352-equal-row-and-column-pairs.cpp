class Solution {
public:
    int equalPairs(vector<vector<int>>& grid){
        map<vector<int>, int> map;
        for(int i=0; i<grid.size(); i++){
            map[grid[i]]++;
        }
        int count = 0;
        for(int i=0; i<grid[0].size(); i++){
            vector<int> col;
            for(int j=0; j<grid.size(); j++){
                col.push_back(grid[j][i]);
            }
            count += map[col];
        }
        return count;
    }
};