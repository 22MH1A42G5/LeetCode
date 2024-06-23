class Solution {
public:
    int longestSubarray(vector<int>& a, int limit) {
        int l=0,r=0,ret=1;
        multiset<int> arr;
        while(r<a.size()){
            arr.insert(a[r++]);
            while(l<r&&*arr.rbegin()-*arr.begin()>limit){
                arr.erase(arr.find(a[l++]));
            }
            ret=max(ret,r-l);
        }
        return ret;
    }
};