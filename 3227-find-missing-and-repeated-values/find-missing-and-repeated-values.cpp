class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        map<int,int>mp;
        for(int i = 0 ; i < grid.size() ; i++){
            for(int j = 0 ; j < grid[0].size() ; j++){
                mp[grid[i][j]]++;
            }
        }
        int te = grid.size()*grid.size();
        int fir , la;
        for(int i = 1 ; i <= te;i++){
            if(mp[i] == 2)
            fir = i;
            if(mp[i] == 0)
            la = i;
        }
        return {fir,la};
    }
};