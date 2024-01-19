class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>m;
        int n=nums.size();
        int n1=nums.size()/2;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        for(auto it:m){
            cout<<it.first<<" "<<it.second<<endl;
            if(it.second>n1){
                return it.first;
                break;
            }
        }
        return -1;
    }
};