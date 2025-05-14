class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>mpp;
        long long i = 0 , j = 0 , pairs = 0,ans = 0;
        int fl = 0;
        while(i < n && j < n+1){
            while(pairs < k && j < n){
                mpp[nums[j]]++;
                if(mpp[nums[j]] >= 2){
                    int te = mpp[nums[j]]-1;
                    pairs -= (te*(te-1))/2;
                    te += 1;
                    pairs += (te*(te-1))/2;
                }
                // if(pairs<k)
                j++;
            }
            cout << j << "\n";
            cout << mpp[1] << "\n";
            if(i < n && pairs >= k){
                ans += n-j+1;
                int te = mpp[nums[i]];
                pairs -= (te*(te-1))/2;
                te -= 1;
                pairs += (te*(te-1))/2;
                mpp[nums[i]]--;
            }
            i++;
        }
        return ans;
    }
};