class Solution {
public:
    void XorFun(vector<int>nums , int ind , vector<int> ans ,int& Fin){
        if(ind >= nums.size()){
            int x = 0;
            for(int i = 0 ; i < ans.size() ; i++){
                x ^= ans[i];
            }
            Fin += x;
            return;
        }
        ans.push_back(nums[ind]);
        XorFun(nums , ind + 1 , ans , Fin);
        ans.pop_back();
        XorFun(nums , ind + 1 , ans , Fin);
    }
    int subsetXORSum(vector<int>& nums) {
        int Fin = 0;
        XorFun(nums , 0 , {} , Fin);
        return Fin;
    }
};