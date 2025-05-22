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
  struct Info{
    int h;
    TreeNode* lca;
 };
class Solution {
public:
    Info lcaDeep(TreeNode* root){
        if(root == NULL) return {0,nullptr};
        Info left = lcaDeep(root->left);
        Info right = lcaDeep(root->right);
        Info curr;
        curr.h = max(left.h , right.h)+1;
        if(left.h == right.h){
            curr.lca = root;
        }
        else if(left.h > right.h){
            curr.lca = left.lca;
        }
        else{
            curr.lca = right.lca;
        }
        return curr;
    }
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        Info ans = lcaDeep(root);
        return ans.lca;
    }
};