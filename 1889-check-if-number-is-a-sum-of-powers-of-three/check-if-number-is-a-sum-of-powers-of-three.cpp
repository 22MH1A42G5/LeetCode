class Solution {
public:
    int countSubsequences(vector<long long>& arr, int ind, int cs, int k) {
        if (ind == arr.size()) {
            if(cs == k)
            return 1;
            return 0;
        }
        int pick = countSubsequences(arr, ind + 1, cs + arr[ind], k);
        int unpick = countSubsequences(arr, ind + 1, cs, k);
        return pick + unpick;
    }
    void build_powers(vector<long long>&Powers){
        Powers[0] = 1;
        for(int i = 1 ; i < 17 ; i++ ){
            Powers[i] =  pow(3 , i);
        }
    }
    bool checkPowersOfThree(int n) {
        vector<long long>Powers(17);
        build_powers(Powers);
        for(int i = 0 ; i < 17 ; i++){
            cout << Powers[i] << " ";
        }
        if(countSubsequences(Powers , 0 , 0 , n))
        return true;
        return false;
    }
};