class Solution {
public:
    int hIndex(vector<int>& cits) {
        int n = cits.size();
        vector<int>cntVec(n+1 , 0);
        for(int i = 0 ; i < n ; i++){
            if(cits[i] > n){
                cntVec[n]++;
            }
            else{
                cntVec[cits[i]]++;
            }
        }
        int paps = 0;
        for(int i = 0 ; i <= n ; i++){
            cout << cntVec[i] << " ";
        }
        for(int i = n ; i >= 0 ; i--){
            paps += cntVec[i];
            if(paps >= i){
                return i;
            }
        }
        return 0;
    }
};