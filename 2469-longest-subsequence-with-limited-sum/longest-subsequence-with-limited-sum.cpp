class Solution {
public:
    int LowerBound(int tar , vector<int>vec){
        int low = 0;
        int high = vec.size() - 1;
        int mid;
        while(low <= high){
            mid = (low + high) / 2;
            if(vec[mid] == tar){
                return mid;
            }
            else if(vec[mid] > tar){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return high;
    }
    vector<int> answerQueries(vector<int>& nums, vector<int>& q) {
        sort(nums.begin() , nums.end());
        vector<int>pref(nums.size());
        pref[0] = nums[0];
        // for(int i = 0 ; i < nums.size() ; i++){
        //     cout << nums[i] << " ";
        // }
        // cout << "\n";
        for(int i = 1 ; i < nums.size() ; i++){
            pref[i] = pref[i-1] + nums[i];
        }
        // for(int i = 0 ; i < pref.size() ; i++){
        //     cout << pref[i] << " ";
        // }
        vector<int>ans(q.size());
        for(int i = 0 ; i < q.size() ; i++){
            ans[i] = LowerBound(q[i] , pref) + 1;
        }
        // cout << "\n";
        for(int i = 0 ; i < ans.size() ; i++){
            cout << ans[i] << " ";
        }
        return ans;
    }
};