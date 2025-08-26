class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dim){
        int pre = 0, ans = 0;
        for (int i = 0; i < dim.size(); i++){
            int a = dim[i][0], b = dim[i][1];
            int d = a*a+b*b;
            int area = a*b;
            if(d > pre || (d == pre && area > ans)){
                pre = d;
                ans = area;
            }
        }
        return ans;
    }
};