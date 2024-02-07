class Solution {
public:
    void Combis(vector<int>&nums,int index,vector<int>&ans,int target,int size,int mysum,vector<vector<int>>&fin){
        if(mysum==target){
            fin.push_back(ans);
            return;
        }
        if(index>=size){
            return;
        }
        if(mysum>target){
            return;
        }
        ans.push_back(nums[index]);
        Combis(nums,index,ans,target,size,mysum+nums[index],fin);
        ans.pop_back();
        Combis(nums,index+1,ans,target,size,mysum,fin);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int>ans;
        vector<vector<int>>fin;
        Combis(nums,0,ans,target,nums.size(),0,fin);
        return fin;
    }
};