class Solution {
public:

    vector<int> Build_Sieve(){
        int N = 1e5 * 3;
        vector<int>Primes(N+1 , 1);
        Primes[1] = 0;
        for(int i = 2 ; i * i <= N ; i++){
            for(int j = i*i ; j <= N ; j+=i){
                // cout<<j<<" ";
                Primes[j] = 0;
            }
        }
        return Primes;
    }
    int maximumPrimeDifference(vector<int>& nums) {
        vector<int>Primes = Build_Sieve();
        vector<int>vec;
        int ans = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(Primes[nums[i]] == 1){
                vec.push_back(i);
            }
        }
        // cout << vec[0];
        // return 1;
        if(vec.size() == 1 || vec.size() == 0)
            return 0;
        return abs(vec[vec.size() - 1] - vec[0]);
    }
};