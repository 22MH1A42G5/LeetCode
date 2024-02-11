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
    void MaxDep(TreeNode* root , int level , int &max){
        if(root==NULL) return;
        if(level>max){
            max=level;
        }
        MaxDep(root->left,level+1,max);
        MaxDep(root->right,level+1,max);
    }
    int maxDepth(TreeNode* root) {
        int max=0,level=1;
        MaxDep(root,level,max);
        return max;
    }
};