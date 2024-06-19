class Solution {
public:
    int minDays(vector<int>& a, int m, int k) {
        if(1ll*m*k>1ll*a.size()) return -1;
        int l=0,r=1e9,mid,ret=1e9;
        while(l<=r){
            mid=(l+r)/2;
            int cc=0,s=0;
            for(auto &i:a){
                if(i<=mid) s++;
                else s=0;
                if(s==k) cc++,s=0; 
            }
            if(cc>=m) ret=mid,r=mid-1;
            else l=mid+1;
        }
        return ret;
    }
};