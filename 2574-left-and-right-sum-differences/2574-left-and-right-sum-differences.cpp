class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>ls;
        vector<int>rs;
        vector<int>ans;
        int s=0;
        ls.push_back(0);
        for(int i=0;i<nums.size()-1;i++){
            s+=nums[i];
            ls.push_back(s);
        }
        rs.push_back(0);
        s=0;
        for(int i=nums.size()-1;i>=1;i--){
            s+=nums[i];
            rs.push_back(s);
        }
        reverse(rs.begin(),rs.end());
        for(int i=0;i<nums.size();i++){
            int temp=abs(ls[i]-rs[i]);
            ans.push_back(temp);
        }
        return ans;
    }
};