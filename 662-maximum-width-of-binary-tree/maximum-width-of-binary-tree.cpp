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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,int>>que;
        que.push({root , 0});
        int ans = 0;
        while(!que.empty()){
            int n = que.size();
            int mini = que.front().second;
            int first , last;
            for(int i = 0 ; i < n; i++){
                long long curr = que.front().second-mini;
                TreeNode* currNode = que.front().first;
                que.pop();
                if(i == 0) first = curr;
                if(i == n-1) last = curr;
                if(currNode->left) que.push({currNode->left , curr*2 + 1});
                if(currNode->right) que.push({currNode->right , curr*2 + 2});
            }
            ans = max(ans , last - first + 1);
        }
        return ans;
    }
};