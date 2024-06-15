class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& p, vector<int>& c) {
        vector<pair<int,int>> a;
        for(int i=0;i<p.size();i++) a.push_back({c[i],p[i]});
        sort(a.begin(),a.end());
        priority_queue<int> pq;
        for(int i=0,j=0;j<k;j++){
            while(i<a.size()&&a[i].first<=w) pq.push(a[i++].second);
            if(pq.size()){
                w+=pq.top();
                pq.pop();
            }
        }
        return w;
    }
};