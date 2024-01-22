class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int,int>m;
        vector<int>v;
        int mis=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        for(auto it:m){
            cout<<it.first<<" "<<it.second<<" "<<endl;
        }
        int i=1;
        for(auto it:m){
            if(it.first!=i){
                mis=i;
                break;
            }
            i++;
        }
        if(mis==0){
            mis=i;
        }
        cout<<i;
        //cout<<mis;
        for(auto it:m){
            if(it.second==2){
                v.push_back(it.first);
                v.push_back(mis);
            }
        }
        return v;
    }
};