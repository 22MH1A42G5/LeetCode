class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<pair<int,int>> a;
        for(int i=0;i<profit.size();i++) a.push_back({profit[i],difficulty[i]});
        sort(a.begin(),a.end(),greater<pair<int,int>>());
        multiset<int> m(worker.begin(),worker.end());
        int ret=0;
        for(int i=0;i<a.size();){
            auto itr=m.lower_bound(a[i].second);
            if(itr==m.end()) i++;
            else{
                ret+=a[i].first;
                m.erase(m.find(*itr));
            }
        }
        return ret;
    }
};