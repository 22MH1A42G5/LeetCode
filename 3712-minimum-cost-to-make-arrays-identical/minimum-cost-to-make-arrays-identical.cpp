class Solution {
public:
    long long minCost(vector<int>& arr, vector<int>& brr, long long k) {
        long long res1=0,res2=0;
        for(int i=0;i<arr.size();i++)
            res1+=abs(arr[i]-brr[i]);
        
        sort(arr.begin(),arr.end());
        sort(brr.begin(),brr.end());
        for(int i=0;i<arr.size();i++){
            res2+=abs(arr[i]-brr[i]);
        }
        res2+=k;
        return min(res1,res2);
    }
};