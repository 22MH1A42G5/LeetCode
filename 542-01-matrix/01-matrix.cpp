class Solution {
public:
    void Nearest(vector<int> dirx , vector<int> diry , vector<vector<int>>mat , pair<int,int>pr , int& cnt ){
        if(pr.first < 0 || pr.first >= mat.size() || pr.second < 0 || pr.second >= mat[0].size())
            return;
        if(mat[pr.first][pr.second] == 0){
            return;
        }
        cnt++;
        for(int i = 0 ; i < 4 ; i++){
            pr.first = pr.first + dirx[i];
            pr.second = pr.second + diry[i];
            Nearest(dirx , diry , mat , pr , cnt);
        }
    }
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        pair<int,int>pr;
        int mini , cnt;
        queue< pair< pair<int,int> , int>>que;
        vector<vector<int>>ans(mat.size() , vector<int>(mat[0].size() , 0));
        vector<vector<int>>vis(mat.size() , vector<int>(mat[0].size() , 0));
        for(int i = 0 ; i < mat.size() ; i++){
            for(int j = 0 ; j < mat[i].size() ; j++){
                if(mat[i][j] == 0){
                    que.push({{i , j} , 0});
                    vis[i][j] = 1;
                }
            }
        }
        for(int i = 0 ; i < mat.size() ; i++){
            for(int j = 0 ; j < mat[i].size() ; j++){
                cout << vis[i][j] << " ";
            }
            cout << "\n";
        }

        int n = mat.size();
        int m = mat[0].size();
        vector<int> dirx = {0, 0, -1, 1};
        vector<int> diry = {-1, 1, 0, 0};
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
                    vis[ni][nj] = 1;
                    que.push({{ni , nj} , d+1});
                }
            }
        }
        return ans;
    }
};