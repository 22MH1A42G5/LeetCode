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
public:
    void Vertical(TreeNode* root , int i , int j ,map<int,vector<pair<int,int>>>& mpp){
        if(root == NULL) return;
        mpp[i].push_back({root->val,j});
        Vertical(root->left , i - 1 ,j+1, mpp);
        Vertical(root->right , i + 1 ,j+1, mpp);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,vector<pair<int,int>>>mpp;
        Vertical(root , 0, 0,mpp);
        // vector<vector<pair<int,int>>>ans;
        // for(auto it : mpp){
        //     ans.push_back(it.second);
        // }
        for (auto& [key, vec] : mpp) {
            for (auto& p : vec) {
                swap(p.first, p.second);
            }
            sort(vec.begin(), vec.end());
            for (auto& p : vec) {
                swap(p.first, p.second);
            }
        }
        vector<vector<int>>ans;
        for(auto it : mpp){
            vector<int>vec1;
            for(auto i : it.second){
                cout << i.first << ":" << i.second << " ";
                vec1.push_back(i.first);
            }
            ans.push_back(vec1);
            cout << "\n";
        }
        return ans;
    }
};