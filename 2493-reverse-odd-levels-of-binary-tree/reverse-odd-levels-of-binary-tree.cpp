class Solution {
public:
    TreeNode* reverseOddLevels(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int level=0;

        while(!q.empty()){
            int size=q.size();
            vector<TreeNode*> level_nodes;
            for(int i=0;i<size;++i){
                TreeNode* curr = q.front();
                q.pop();

                level_nodes.push_back(curr);
                if(curr->left)  q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            if(level&1){
                int n=level_nodes.size();
                for(int j=0;j<n/2;++j)
                    swap(level_nodes[j]->val,level_nodes[n-j-1]->val);
            }
            level++;
        }
        return root;
    }
};