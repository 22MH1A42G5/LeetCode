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
    TreeNode* createBinaryTree(vector<vector<int>>& a) {
        map<int,TreeNode*> nodes;
        set<int> d;
        for(auto &i:a){
            if(!nodes.count(i[0])) nodes[i[0]]=new TreeNode(i[0]);
            if(!nodes.count(i[1])) nodes[i[1]]=new TreeNode(i[1]);
            d.insert(i[1]);
            if(i[2]) nodes[i[0]]->left=nodes[i[1]];
            else nodes[i[0]]->right=nodes[i[1]];
        }
        for(auto &itr: nodes) if(!d.count(itr.first)) return itr.second;
        return nullptr;
    }
};