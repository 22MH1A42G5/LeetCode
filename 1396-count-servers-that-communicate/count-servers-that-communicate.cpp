class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        vector<int>row(grid.size()),col(grid[0].size());
        int cnt;
        for(int i = 0 ; i < grid.size() ; i++){
            cnt = 0;
            for(int j = 0 ; j < grid[i].size() ; j++){
                if(grid[i][j] == 1)
                    cnt++;
            }
            if(cnt >= 2){
                row[i] = 1;
            }
            else{
                row[i] = 0;
            }
        }

        for(int i = 0 ; i < grid[0].size() ; i++){
            int cnt = 0;
            for(int j = 0 ; j < grid.size() ; j++){
                if(grid[j][i] == 1)
                    cnt++;
            }
            if(cnt >= 2){
                col[i] = 1;
            }
            else{
                col[i] = 0;
            }
        }
        // for(int i = 0 ; i < row.size() ; i++){
        //     cout<<col[i] << " ";
        // }
        cnt = 0;
        for(int i = 0 ; i < grid.size() ; i++){
            for(int j = 0 ; j < grid[i].size() ; j++){
                if(grid[i][j] == 1){
                    if(row[i] || col[j])
                        cnt++;
                }
            }
        }
        return cnt;
    }
};