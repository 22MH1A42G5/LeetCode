class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
         vector<int>v1(n,0);
        for(auto &vec:roads){
            v1[vec[0]]++;
            v1[vec[1]]++;
        }
        sort(v1.begin(),v1.end());
        
        long long val=1;
        long long sum=0;
        for(int i=0;i<v1.size();i++){
            sum+=val*v1[i];
            val++;
        }
        return sum;
    }
};