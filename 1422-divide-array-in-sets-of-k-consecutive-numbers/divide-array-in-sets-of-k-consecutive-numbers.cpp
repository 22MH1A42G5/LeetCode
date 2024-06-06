class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        if(nums.size()%k!=0){
            return false;
        }
        int st;
        unordered_map<int,int>mp;
        for(int i = 0 ; i < nums.size() ; i++){
            mp[nums[i]]++;
        }
        for(int i = 0 ;i < nums.size() ; i++){
            st = nums[i];
            while(mp[st]){
                st--;
            }
            while(st <= nums[i]){
                while(mp[st]){
                    for(int j = st ; j < st+k ; j++){
                        if(!mp[j]){
                            return false;
                        }
                        mp[j]--;
                    }
                }
                st++;
            }
        }
        return true;
    }
};