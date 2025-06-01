/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    TreeNode* solve(vector<int>&nums,int low,int high){
        if(low>high) return nullptr;
        int mid=(low+high)/2;
        TreeNode* newnode=new TreeNode(nums[mid]);
        newnode->left=solve(nums,low,mid-1);
        newnode->right=solve(nums,mid+1,high);
        return newnode;
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int low=0,high=nums.size()-1;
        return solve(nums,low,high);
    }
};