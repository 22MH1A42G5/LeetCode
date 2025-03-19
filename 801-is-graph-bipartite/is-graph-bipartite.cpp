class Solution {
public:
    bool dfs(int node , vector<int>&color ,int col ,vector<vector<int>> g ){
        color[node] = col;
        for(int i = 0 ; i < g[node].size(); i++){
            int t = g[node][i];
            if(color[t] == -1){
                if(dfs(t , color , !col , g) == false){
                    return false;
                }
            }
            else if(color[t] == col)
            return false;
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& g) {
        vector<int>color(g.size() , -1);
        for(int i = 0 ; i < g.size() ; i++){
            if(color[i] == -1){
                if(dfs(i ,color , 0 , g) == false)
                return false;
            }
        }
        return true;
    }
};