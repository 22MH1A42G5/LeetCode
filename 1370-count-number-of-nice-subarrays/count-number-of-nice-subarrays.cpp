class Solution {
public:
    int numberOfSubarrays(vector<int>& a, int k) {
        int n=a.size();
        vector<int> pre(n+2,0),suf(n+2,n+1),odd;
        for(int i=1;i<=n;i++) if(a[i-1]%2) odd.push_back(i);
        for(int i=2;i<=n;i++){
            if(a[i-2]%2) pre[i]=i-1;
            else pre[i]=pre[i-1];
        }
        for(int i=n-1;i>=1;i--){
            if(a[i]%2) suf[i]=i+1;
            else suf[i]=suf[i+1];
        }
        int ret=0;
        for(int i=0;i+k-1<odd.size();i++){
            ret+=(odd[i]-pre[odd[i]])*(suf[odd[i+k-1]]-odd[i+k-1]);
        }
        return ret;
    }
};