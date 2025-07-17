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
    void leafing(TreeNode* root , vector<int>&vec){
        if(root == NULL) return;
        if(root->left == NULL && root->right == NULL){
            vec.push_back(root->val);
        }
        leafing(root->left , vec);
        leafing(root->right , vec);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>vec1 , vec2;
        leafing(root1 , vec1);
        leafing(root2 , vec2);
        if(vec1 == vec2)
        return true;
        return false;
    }
};