class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        vector<int>ans;
        int c,fl,max;
        for(int i = 0 ; i+k <= nums.size(); i++){
            c = 0;
            fl = 0;
            max = 0;
            for(int j = i ; j < nums.size() && c < k ; j++){
                c++;
                if(j < nums.size() && c < k && nums[j+1] - nums[j] != 1){
                    fl = 1;
                }
                if(max < nums[j]){
                    max = nums[j];
                }
            }
            if(fl == 0){
                ans.push_back(max);
            }
            else{
                ans.push_back(-1);
            }
        }
        return ans;
    }
};