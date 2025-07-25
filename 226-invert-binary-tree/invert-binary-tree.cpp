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
    TreeNode* Mirror(TreeNode* root){
        if(root == NULL){
            return NULL;
        }
        TreeNode* left = Mirror(root->right);
        TreeNode* right = Mirror(root->left);
        root->left = left;
        root->right = right;
        return root;
    }
    TreeNode* invertTree(TreeNode* root) {
        TreeNode* ans = Mirror(root);
        return ans;
    }
};