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
    TreeNode* BinaryMerge(TreeNode* root1 , TreeNode* root2){
        queue<pair<TreeNode*,TreeNode*>>que;
        queue<TreeNode*> ans;
        que.push({root1 , root2});
        TreeNode* newNode = new TreeNode(root1->val + root2->val);
        TreeNode* MergedRoot = newNode;
        ans.push(newNode);
        while(!que.empty()){
            pair<TreeNode*,TreeNode*> curr = que.front();
            TreeNode* currAns = ans.front();
            ans.pop();
            que.pop();
            if(curr.first->left != NULL && curr.second->left != NULL){
                newNode = new TreeNode(curr.first->left->val + curr.second->left->val);
                currAns->left = newNode;
                ans.push(newNode);
                que.push({curr.first->left , curr.second->left});
            }else{
                if(curr.first->left == NULL){
                    currAns->left = curr.second->left;
                }
                else{
                    currAns->left = curr.first->left;
                }
            }
            if(curr.first->right != NULL && curr.second->right != NULL){
                newNode = new TreeNode(curr.first->right->val + curr.second->right->val);
                currAns->right = newNode;
                ans.push(newNode);
                que.push({curr.first->right , curr.second->right});
            }else{
                if(curr.first->right == NULL){
                    currAns->right = curr.second->right;
                }
                else{
                    currAns->right = curr.first->right;
                }
            }
        }
        return MergedRoot;
    }
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(root1 == NULL)
        return root2;
        if(root2 == NULL)
        return root1;
        return BinaryMerge(root1 , root2);
    }
};