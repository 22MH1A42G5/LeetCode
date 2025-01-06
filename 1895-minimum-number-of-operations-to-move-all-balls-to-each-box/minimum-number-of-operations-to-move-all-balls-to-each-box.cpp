class Solution {
public:
    vector<int> minOperations(string box) {
        int n = box.size();
        if(n == 1)
        return {0};
        int s = 0;
        vector<int>pref(n),suf(n),ans(n);
        for(int i = 0 ; i < n ; i++){
            if(box[i] == '1')
            s += 1;
            pref[i] = s;
        }
        s = 0;
        for(int i = n-1 ; i >= 0 ; i--){
            if(box[i] =='1')
            s += 1;
            suf[i] = s;
        }
        reverse(suf.begin() , suf.end());
        s = 0;
        for(int i = 0 ; i < n ;i++){
            s += pref[i];
            pref[i] = s;
        }
        s = 0;
        for(int i = 0 ; i < n ; i++){
            s += suf[i];
            suf[i] = s;
        }
        reverse(suf.begin() , suf.end());
        ans[0] = suf[1];
        ans[n-1] = pref[n-2];
        for(int i = 1 ; i < n-1 ;i++){
            ans[i] = pref[i-1]+suf[i+1];
        }
        return ans;
    }
};
// 110
// 1 2 2
// 1 1 3
// 0 1 2
// 

// 001011
// 0 0 1 1 2 3

// 3 3 3 2 2 1