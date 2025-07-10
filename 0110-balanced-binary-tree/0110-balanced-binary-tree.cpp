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
    int check(TreeNode* root){
        if(root == NULL)
            return 0;
        int lf = check(root->left);
        int rig = check(root->right);
        if(lf == -1 || rig == -1)
            return -1;
        if(abs(lf - rig) > 1)
            return -1;
        return max(lf , rig) + 1;
    }
    bool isBalanced(TreeNode* root) {
        if(check(root) == -1)
        return false;
        else
        return true;
    }
};