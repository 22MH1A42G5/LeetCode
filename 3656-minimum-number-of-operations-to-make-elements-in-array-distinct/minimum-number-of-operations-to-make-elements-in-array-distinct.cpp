class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int maxi = *max_element(nums.begin() , nums.end());
        int n = nums.size();
        vector<int>vec(maxi+1,0);
        int i;
        for(i = n-1 ; i >= 0 ; i--){
            if(vec[nums[i]] == 1){
                break;
            }
            vec[nums[i]] = 1;
        }
        cout<<i<<endl;
        double ans = ceil(double(i+1)/3);
        return ans;
        
    }
};