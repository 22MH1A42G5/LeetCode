class Solution {
public:
    int orangesRotting(vector<vector<int>>& g) {
        int m = g.size();
        int n = g[0].size();
        queue<pair<int,int>>que;
        int tot = 0;
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if(g[i][j] == 2)
                que.push({i , j});
                if(g[i][j] != 0) tot++;
            }
        }
        int cnt = 0 , ans = 0;
        vector<int> dirx = {0, 0, 1, -1};
        vector<int> diry = {1, -1, 0, 0};
        while(!que.empty()){
            int k= que.size();
            cnt += k;
            while(k--){
                int x = que.front().first;
                int y = que.front().second;
                que.pop();
                for(int i = 0 ; i < 4 ; i++){
                    int nx = x + dirx[i];
                    int ny = y + diry[i];
                    if(nx < 0 || ny < 0 || nx >= m || ny >= n || g[nx][ny] != 1) continue;
                    g[nx][ny] = 2;
                    que.push({nx , ny});
                }
            }
            if(!que.empty())
            ans++;
        }
        if(cnt == tot)
        return ans;
        else
        return -1;


    }
};