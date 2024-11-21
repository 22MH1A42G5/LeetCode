class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        vector<int>tem,ans;
        if(k==1)
            return nums;
        for(int i = 0 ; i < nums.size()-1 ; i++){
            if( nums[i+1] - nums[i] == 1){
                tem.push_back(1);
            }
            else{
                tem.push_back(0);
            }
        }
        // return {};
        int cnt = 0;
        for(int i = 0 ; i < tem.size(); i++){
            if(tem[i] == 1){
                cnt++;
            }
            else
                cnt=0;
            if(i+1 >= k-1){
                if(cnt == k-1){
                    ans.push_back(nums[i+1]);
                    cnt-=1;
                }
                else{
                    ans.push_back(-1);
                }
            }
        }
        return ans;
    }
};