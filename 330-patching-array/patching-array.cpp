class Solution {
public:
    int minPatches(vector<int>& a, int n) {
        int ret=0;
        for(long long i=0,s=1;s<=n;){
            if(i<a.size()&&a[i]<=s) s+=a[i++];
            else ret++,s+=s;
        }
        return ret;
    }
};