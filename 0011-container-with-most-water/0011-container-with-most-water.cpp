class Solution {
public:
    int maxArea(vector<int>& hei) {
        int i = 0 , j = hei.size()-1 , ans = 0;
        while(i <= j){
            if(hei[i] < hei[j]){
                ans = max(ans , min(hei[i] , hei[j])*(j-i));
                i++;
            }
            else if(hei[i] >= hei[j]){
                ans = max(ans , (min(hei[i] , hei[j])*(j-i)));
                j--;
            }
            // else{
            //     ans = max(ans , min(hei[i] , hei[j]));
            //     i++;
            //     j--;
            // }
        }
        return ans;
    }
};