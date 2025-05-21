/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 struct Info{
    TreeNode* lca;
 };
class Solution {
public:
    Info LowestCommon(TreeNode* root , TreeNode* p ,TreeNode* q){
        if(root == NULL) return {nullptr};
        Info left = LowestCommon(root->left , p , q);
        Info right = LowestCommon(root->right , p , q);
        if(root == p || root == q){
            return {root};
        }
        if(left.lca && right.lca) return {root};
        if(left.lca) return {left.lca};
        if(right.lca) return {right.lca};
        return {nullptr};
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        Info ans = LowestCommon(root , p , q);
        return ans.lca;
    }
};