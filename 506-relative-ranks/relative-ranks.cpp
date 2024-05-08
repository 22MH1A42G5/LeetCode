class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<pair<int,int>> rank;
        for(int i=0;i<score.size();i++) rank.push_back({score[i],i});
        sort(rank.begin(),rank.end(),greater<pair<int,int>>());
        vector<string> ret(score.size());
        for(int i=0;i<rank.size();i++){
            if(!i) ret[rank[i].second]="Gold Medal";
            else if(i==1) ret[rank[i].second]="Silver Medal";
            else if(i==2) ret[rank[i].second]="Bronze Medal";
            else ret[rank[i].second]=to_string(i+1);
        }
        return ret;
    }
};