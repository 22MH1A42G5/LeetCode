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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> que;
        vector<int>v;
        if(root==NULL){
            return {};
        }
        vector<vector<int>> dv;
        int t;
        que.push(root);
        while(!que.empty()){
            t=que.size();
            while(t--){
                TreeNode* x=que.front();
                v.push_back(x->val);
                que.pop();
                if(x->left != NULL) que.push(x->left);
                if(x->right != NULL) que.push(x->right);
            }
            dv.push_back(v);
            v.clear();
        }
        return dv;
    }
};