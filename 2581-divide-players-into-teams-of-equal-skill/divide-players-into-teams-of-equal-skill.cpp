class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        int te = skill[skill.size()-1] + skill[0];
        long long ans=0;
        int i = 0 , j = skill.size()-1;
        while(i < j){
            int s = skill[i]+skill[j];
            if(s != te)
            return -1;
            ans += skill[i]*skill[j];
            i++;
            j--;
        }
        return ans;
    }
};