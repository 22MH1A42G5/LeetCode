class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& img, int sr, int sc, int color) {
        int n = img.size();
        int m = img[0].size();
        int stcol = img[sr][sc];
        if(stcol == color){
            return img;
        }
        img[sr][sc] = color;
        queue<pair<int,int>>que;
        que.push({sr,sc});
        vector<int>dirx = {0 , 0 , 1 , -1};
        vector<int>diry = {1 , -1 , 0 , 0};
        while(!que.empty()){
            int k = que.size();
            while(k--){
                int x = que.front().first;
                int y = que.front().second;
                que.pop();
                for(int i = 0 ; i < 4 ; i++){
                    int nx = x + dirx[i];
                    int ny = y + diry[i];
                    if(nx >= 0 && ny >= 0 && nx < n && ny < m && img[nx][ny] == stcol && img[nx][ny] != color){
                        que.push({nx , ny});
                        img[nx][ny] = color;
                    }
                }
            }
        }
        return img;
    }
};