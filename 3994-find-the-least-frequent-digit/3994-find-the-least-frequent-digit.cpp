class Solution {
public:
    int getLeastFrequentDigit(int n) {
        map<int,int>mpp;
        while(n != 0){
            mpp[n%10]++;
            n/=10;
        }
        int finans = INT_MAX;
        int mini = INT_MAX;
        for(auto it:mpp){
            // cout << it.first << " " << it.second << "\n";
            mini = min(mini , it.second);
            // if(mini >= it.second){
            //     finans = min(it.first , finans);
            // }
        }
        for(auto it:mpp){
            if(it.second == mini){
                finans = min(it.first , finans);
            }
        }
        return finans;
    }
};