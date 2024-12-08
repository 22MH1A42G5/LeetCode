class Solution {
public:
    int maxTwoEvents(vector<vector<int>>& ev) {
        vector<vector<int>> ls;
        for(auto& ev: ev){
            int st = ev[0];
            int e = ev[1];
            int val = ev[2];
            ls.push_back({st,1,val});
            ls.push_back({e+1,-1,val});
        }
        sort(ls.begin(),ls.end());
        int max_val=0;
        int max_seen=0;
        for(auto& ev: ls){
            int pt = ev[0];
            int st = ev[1];
            int val = ev[2];
            if(st==1)
                max_val = max(max_val,max_seen+val);
            if(st==-1)
                max_seen = max(max_seen,val);
        }
        return max_val;
    }
};