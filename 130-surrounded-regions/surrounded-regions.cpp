class Solution {
public:
    void solve(vector<vector<char>>& brd) {
        vector<vector<int>>vis(brd.size() , vector<int>(brd[0].size() , 0));
        int n = brd.size();
        int m = brd[0].size();
        queue<pair<int,int>>que;
        for (int col = 0; col < m; col++){
            if(brd[0][col] == 'O'){
                que.push({0 , col});
                vis[0][col] = 1;
            }
        }
        for (int row = 1; row < n; row++){
            if(brd[row][m-1] == 'O'){
                que.push({row,m-1});
                vis[row][m-1] = 1;
            }
        }
        if (n > 1) {
            for (int col = m - 2; col >= 0; col--){
                if(brd[n-1][col] == 'O'){
                    que.push({n-1 , col});
                    vis[n-1][col] = 1;
                }
            }
        }
        if (m > 1) {
            for (int row = n - 2; row > 0; row--){
                if(brd[row][0] == 'O'){
                    que.push({row,0});
                    vis[row][0] = 1;
                }
            }
        }
        vector<int>dirx = {0 , 0 , -1 , 1};
        vector<int>diry = {-1 , 1 , 0 , 0};
        while(!que.empty()){
            int i = que.front().first;
            int j = que.front().second;
            que.pop();
            for(int k = 0 ;k < 4 ; k++){
                int ni = i + dirx[k];
                int nj = j + diry[k];
                if(ni >= 0 && nj >= 0 && ni < n && nj < m && vis[ni][nj] == 0 && brd[ni][nj] == 'O'){
                    que.push({ni,nj});
                    vis[ni][nj] = 1;
                }
            }
        }
        for(int i = 0 ; i < vis.size() ; i++){
            for(int j = 0 ; j < vis[i].size() ; j++){
                if(vis[i][j] != 1){
                    brd[i][j] = 'X';
                }
            }
        }
    }
};