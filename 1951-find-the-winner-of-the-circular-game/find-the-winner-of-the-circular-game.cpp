class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> a(n);
        for(int i=0;i<n;i++) a[i]=i;
        int i=0,t=n;
        while(t--){
            while(a[i]==-1) i=(i+1)%n;
            if(!t) break;
            int ct=1;
            while(ct<k){
                i=(i+1)%n;
                ct+=a[i]!=-1;
            }
            a[i]=-1;
        }
        return i+1;
    }
};