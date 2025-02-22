class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(k % n == 0){
            return;
        }
        if(k > n)
        k = k % n;
        vector<int>ans;
        int i = n - k;
        while( i < n){
            ans.push_back(nums[i]);
            i++;
        }
        i = 0;
        while(i < n-k){
            ans.push_back(nums[i]);
            i++;
        }
        for(int i = 0 ; i < n ; i++){
            nums[i] = ans[i];
        }
    }
};