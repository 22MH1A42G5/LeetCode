class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int val) {
        vector<int>cnt(val);
        for(int x:nums) cnt[(x%val+val)%val]++;
        int mn=*min_element(cnt.begin(),cnt.end());
        for(int i=0;i<val;i++)
            if(cnt[i]==mn) return mn*val+i;
        return 0;
    }
};