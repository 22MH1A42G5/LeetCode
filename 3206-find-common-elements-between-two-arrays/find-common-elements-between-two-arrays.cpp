class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp1,mp2;
        for(int i = 0 ; i < nums1.size() ; i++){
            mp1[nums1[i]]++;
        }
        for(int i = 0 ; i < nums2.size() ; i++){
            mp2[nums2[i]]++;
        }
        int cnt1=0,cnt2 = 0;
        for(int i = 0 ; i < nums2.size() ; i++){
            if(mp1[nums2[i]]!=0)
            cnt1++;
        }
        for(int i = 0 ; i < nums1.size() ; i++){
            if(mp2[nums1[i]]!=0)
            cnt2++;
        }
        return {cnt2,cnt1};
    }
};