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
vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root == NULL) return {};
        map<int,vector<int>>mpp;
        queue<TreeNode*> que;
        que.push(root);
        int j = 1;
        while(!que.empty()){
            int n = que.size();
            for(int i = 0 ; i < n; i++){
                TreeNode* curr = que.front();
                // if(curr == NULL) cout << "HI";
                // cout << curr->val << " ";
                que.pop();
                if(j % 2 == 1)
                mpp[j].push_back(curr->val);
                else
                mpp[j].insert(mpp[j].begin(),curr->val);
                if(curr->left) que.push(curr->left);
                if(curr->right) que.push(curr->right);
            }
            // cout << "\n";
            j++;
        }
        vector<vector<int>>ans;
        for(auto it:mpp){
            ans.push_back(it.second);
        }
        return ans;
    }
};