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
    int LeftLeafs(TreeNode* root , bool fl){
        if(root == NULL) return 0;
        if(root->left == NULL && root->right == NULL && fl){
            return root->val;
        }
        int lf = LeftLeafs(root->left , true);
        int rt = LeftLeafs(root->right , false);
        return lf + rt;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        bool fl = false;
        return LeftLeafs(root,fl);
    }
};