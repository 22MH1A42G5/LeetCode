class Solution {
public:
    void Perms(vector<int>v,int start,int end,vector<vector<int>>&ans){
        if(start>=end){
            ans.push_back(v);
            return;
        }
        for(int i=start;i<=end;i++){
            swap(v[start],v[i]);
            Perms(v,start+1,end,ans);
            swap(v[start],v[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        Perms(nums,0,nums.size()-1,ans);
        return ans;
    }
};