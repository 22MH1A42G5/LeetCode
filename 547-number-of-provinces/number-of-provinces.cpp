class Solution {
public:
    void dfs(int st , vector<vector<int>>&adj , vector<bool>&vis){
        vis[st] = true;
        for(int i = 0 ; i < adj[st].size() ; i++){
            if(!vis[adj[st][i]])
            dfs(adj[st][i] , adj , vis);
        }
    }
    int findCircleNum(vector<vector<int>>& con) {
        vector<vector<int>>adj(con.size());
        for(int i = 0 ; i < con.size(); i++){
            for(int j = 0 ; j < con[i].size() ; j++){
                if(i != j){
                    if(con[i][j] != 0) adj[i].push_back(j);
                }
            }
        }
        // for(int i = 0 ; i < adj.size() ; i++){
        //     cout << i+1 << ":";
        //     for(int j = 0 ; j < adj[i].size() ; j++){
        //         cout << adj[i][j]+1 <<  " ";
        //     }
        //     cout << "\n";
        // }
        int cnt = 0;
        vector<bool>vis(con.size()  , false);
        for(int i = 0 ; i < con.size() ; i++){
            if(!vis[i]){
                cnt++;
                dfs(i , adj , vis);
            }
        }
        cout << cnt << " ";
        return cnt;
    }
};