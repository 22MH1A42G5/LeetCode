class Solution {
public:
    int maxSatisfied(vector<int>& a, vector<int>& b, int m) {
        int n=a.size(),s=0;
        vector<int> pre(n+2);
        for(int i=1;i<=n;i++){
            pre[i]+=pre[i-1]+b[i-1]*a[i-1];
            s+=(1-b[i-1])*a[i-1];
        }
        int ret=s;
        for(int i=1,j=i+m-1;j<=n;i++,j++) ret=max(ret,s+pre[j]-pre[i-1]);
        return ret;
    }
};