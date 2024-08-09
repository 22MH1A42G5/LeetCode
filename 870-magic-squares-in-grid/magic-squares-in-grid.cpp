class Solution {
public:
    bool isValid(int i,int j,vector<vector<int>>mat){
        vector<int>arr={mat[i][j],mat[i][j+1],mat[i][j+2],mat[i+1][j],mat[i+1][j+1],mat[i+1][j+2],mat[i+2][j],mat[i+2][j+1],mat[i+2][j+2]};
        sort(arr.begin(),arr.end());
        for(int i=1;i<=9;i++){
            if(arr[i-1]!=i)
                return false;
        }
        int r1=mat[i][j]+mat[i][j+1]+mat[i][j+2];
        int r2=mat[i+1][j]+mat[i+1][j+1]+mat[i+1][j+2];
        int r3=mat[i+2][j]+mat[i+2][j+1]+mat[i+2][j+2];
        int c1=mat[i][j]+mat[i+1][j]+mat[i+2][j];
        int c2=mat[i][j+1]+mat[i+1][j+1]+mat[i+2][j+1];
        int c3=mat[i][j+2]+mat[i+1][j+2]+mat[i+2][j+2];
        int d1=mat[i][j]+mat[i+1][j+1]+mat[i+2][j+2];
        int d2=mat[i+2][j]+mat[i+1][j+1]+mat[i][j+2];
        return r1==r2 && r1==r3 && r3==c1 && c1==c2 && c2==c3 && c3==d1 && d1==d2;
    }
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        if(grid.size()<3 || grid[0].size()<3)
            return 0;
        int cnt=0;
        for(int i=0;i<grid.size()-2;i++){
            for(int j=0;j<grid[0].size()-2;j++){
                if(isValid(i,j,grid))
                    cnt++;
            }
        }
        return cnt;
    }
};