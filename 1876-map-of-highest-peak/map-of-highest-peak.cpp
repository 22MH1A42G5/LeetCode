class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& wat) {
        int n = wat.size();
        int m = wat[0].size();
        queue<pair<pair<int,int>,int>>que;
        vector<vector<int>> ans(wat.size() , vector<int>(wat[0].size() , 0));
        vector<vector<int>> vis(wat.size() , vector<int>(wat[0].size() , 0));
        for(int i = 0 ; i < wat.size() ; i++){
            for(int j = 0 ; j < wat[i].size(); j++){
                if(wat[i][j] == 1){
                    que.push({{i , j} , 0});
                    vis[i][j] = 1;
                }
            }
        }
        vector<int>dirx = {0 , 0 , -1 , 1};
        vector<int>diry = {-1 , 1 , 0 , 0};
        while(!que.empty()){
            int i = que.front().first.first;
            int j = que.front().first.second;
            int d = que.front().second;
            ans[i][j] = d;
            que.pop();
            for(int k = 0 ; k < 4 ; k++){
                int ni = i + dirx[k];
                int nj = j + diry[k];
                if(ni >= 0 && nj >= 0 && ni < n && nj < m && vis[ni][nj] == 0){
                    que.push({{ni,nj} , d+1});
                    vis[ni][nj] = 1;
                }
            }
        }
        return ans;
    }
};