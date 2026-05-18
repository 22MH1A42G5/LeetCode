class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();

        unordered_map<int, vector<int>> mp;
        for(int i=0; i<n; i++) {
            mp[arr[i]].push_back(i);
        }

        queue<pair<int, int>> q;
        q.push({0, 0});
        vector<int> vis(n, 0);
        vis[0] = 1;

        while(!q.empty()) {
            int node = q.front().first;
            int step = q.front().second;
            q.pop();

            if(node==(n-1)) {
                return step;
            }

            int n1 = node+1;
            if(n1 < n && !vis[n1]) {
                vis[n1] = 1;
                q.push({n1, step+1});
            }

            int n2 = node-1;
            if(n2 >=0 && !vis[n2]) {
                vis[n2] = 1;
                q.push({n2, step+1});
            }

            for(auto &it: mp[arr[node]]) {
                if(!vis[it]) {
                    vis[it] = 1;
                    q.push({it, step+1});
                }
            }
            mp[arr[node]].clear();
        }

        return n-1;
    }
};