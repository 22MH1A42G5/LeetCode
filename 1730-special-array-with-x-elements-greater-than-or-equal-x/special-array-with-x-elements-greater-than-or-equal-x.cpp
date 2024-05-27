class Solution {
public:
    int specialArray(vector<int>& a) {
        sort(a.begin(),a.end());
        for(int x=a.back(),i=a.size()-1;x>=0;x--){
            while(i>=0&&a[i]>=x) i--;
            if(a.size()-i-1==x) return x; 
        }
        return -1;
    }
    // 0 0 3 4 4
};