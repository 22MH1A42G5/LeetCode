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
    int ans;
    int lvl;
    void solve(TreeNode* node, int level = 0){
        if(!node) return;
        if(level > lvl){
            ans = node->val;
            lvl = level;
        }
        solve(node->left, level + 1);
        solve(node->right, level + 1);
    }
    int findBottomLeftValue(TreeNode* root) {
        lvl = -1;
        solve(root);
        return ans;
    }
};