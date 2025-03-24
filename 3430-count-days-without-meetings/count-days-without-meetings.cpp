class Solution {
public:
    int countDays(int d, vector<vector<int>>& met) {
        map<int,int>mpp;
        for(int i = 0 ; i < met.size() ; i++){
            mpp[met[i][0]]++;
            mpp[met[i][1] + 1]--;
        }
        int s = 0;
        // cout << mpp.begin()->first;
        // int s = mpp[mpp.begin().first];
        // for(auto it : mpp){
        //     cout << it.first << " " << it.second << "\n";
        // }
        int ans = 0;
        for (auto it = mpp.begin(); it != mpp.end(); ++it){
            s += it->second;
            it->second = s;
            // cout << it.first << " " << it.second << "\n";
        }
        if(mpp.begin()->first != 1 && mpp.begin()->first <= d){
            ans += mpp.begin()->first - 1;
        }
        cout << ans << "\n";
        for (auto it = mpp.begin(); it != mpp.end(); ++it){
            auto nxtit = std::next(it);
            if(it->second == 0 && it->first <= d){
                if(nxtit != mpp.end()){
                    ans += nxtit->first - it->first;
                    // cout << ans << "\n";
                    // cout << nxtit->first << " " << it->first << "\n";
                }
            }
        }
        cout << mpp.rbegin()->first << " " << d << "\n";
        for(auto it : mpp){
            cout << it.first << " " << it.second << "\n";
        }
        if(mpp.rbegin()->first < d ){
            // cout << "Hi";
            ans += d - mpp.rbegin()->first ;
        }
        else if(mpp.rbegin()->first==d && mpp.rbegin()->second == 0){
            ans += 1;
        }
        if(mpp.rbegin() -> first < d && mpp.rbegin()-> second == 0){
            ans += 1;
        }
        cout << ans << " ";
        return ans;
    }
};