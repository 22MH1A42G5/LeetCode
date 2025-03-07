class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n  = grid.size();
        int m = grid[0].size();
        vector<vector<int>>vis(n , vector<int>(m , 0));
        queue<pair<int,int>>que;
        for(int i = 0 ; i < m ; i++){
            if(grid[0][i] == 1){
                que.push({0 , i});
                vis[0][i] = 1;
            }
            if(n != 1){
                if(grid[n-1][i] == 1){
                    que.push({n-1 , i});
                    vis[n-1][i] = 1;
                }
            }
        }
        for(int i = 1 ; i < n-1 ; i++){
            if(grid[i][0] == 1){
                que.push({i , 0});
                vis[i][0] = 1;
            }
            if(m != 1){
                if(grid[i][m-1] == 1){
                    que.push({i , m-1});
                    vis[i][m-1] = 1;
                }
            }
        }
        // while(!que.empty()){
        //     cout << que.front().first << " " << que.front().second << "\n";
        //     que.pop();
        // }
        vector<int>dirx = {0 , 0 , -1 , 1};
        vector<int>diry = {-1 , 1 , 0 , 0};
        while(!que.empty()){
            int i = que.front().first;
            int j = que.front().second;
            que.pop();
            for(int k = 0 ; k < 4 ; k++){
                int ni = i + dirx[k];
                int nj = j + diry[k];
                if(ni >= 0 && nj >= 0 && nj < m && ni < n && vis[ni][nj] == 0 && grid[ni][nj] == 1){
                    vis[ni][nj] = 1;
                    que.push({ni , nj});
                }
            }
        }
        // for(int i = 0 ; i < vis.size() ; i++){
        //     for(int j = 0 ; j < vis.size() ; j++){
        //         cout << grid[i][j] << " ";
        //     }
        //     cout << "\n";
        // }
        int ans = 0;
        for(int i = 0 ; i < vis.size() ; i++){
            for(int j = 0 ; j < vis[i].size() ; j++){
                if(grid[i][j] != vis[i][j]){
                    ans++;
                }
            }
        }
        return ans;
    }
};