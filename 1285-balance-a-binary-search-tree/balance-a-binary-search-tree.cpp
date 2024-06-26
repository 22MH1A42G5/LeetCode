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
    void inorder(TreeNode* root, vector<TreeNode*>& order){
        if(!root) return;
        inorder(root->left,order);
        order.push_back(root);
        inorder(root->right,order);
    }
    TreeNode* dac(vector<TreeNode*>& order, int l, int r){
        if(l>r) return nullptr;
        int m=(l+r)/2;
        TreeNode* root=order[m];
        root->left=dac(order,l,m-1);
        root->right=dac(order,m+1,r);
        return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
        if(!root) return nullptr;
        vector<TreeNode*> order;
        inorder(root,order);
        return dac(order,0,order.size()-1);
    }
};