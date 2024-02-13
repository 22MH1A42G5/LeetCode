class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& v) {
        map<int,vector<int>>mp;
        vector<vector<int>>vd;
        vector<int>vi;
        for(int i = 0 ; i < v.size() ; i ++ ){
            mp[v[i]].push_back(i);
        }
        for(auto it : mp){
            cout<<it.first<<" ";
            for(int i=0;i<it.second.size();i++){
                cout<<it.second[i]<<" ";
            }
            cout<<endl;
        }
        for(auto it: mp){
            if ( it. first >= it.second.size()){
                vd.push_back(it.second);
            }
            if(it.first < it.second.size()){
                for(int i=0;i<it.second.size();i++){
                    vi.push_back(it.second[i]);
                    //cout<<vi.size()<<" ";
                    if(vi.size()>=it.first){
                        //cout<<"HI";
                        cout<<endl;
                        vd.push_back(vi);
                        vi.clear();
                    }
                }
            }
        }
        return vd;
    }
};