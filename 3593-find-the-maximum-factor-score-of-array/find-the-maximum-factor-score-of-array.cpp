class Solution {
public:
    long long gcd(long long int a, long long int b)
    {
      if (b == 0)
        return a;
      return gcd(b, a % b);
    }
    long long lcm(long long a, long long b)
    {
        return (a / gcd(a, b)) * b;
    }
    long long maxScore(vector<int>& nums) {
        if(nums.size() == 1){
            return nums[0]*nums[0];
        }
        long long l = nums[0];
        long long g = nums[0];
        for(int i = 0 ; i < nums.size() ; i++){
            l = lcm(l,nums[i]);
            g = gcd(g,nums[i]);
        }
        long long te = l*g;
        cout<<te<<endl;
        long long maxi = l*g;
        // cout<<"HI"<<endl;
        for(int i = 0 ; i < nums.size() ; i++){
            if(i==0){
                l = nums[1];
                g = nums[1];
            }
            else{
                l = nums[0];
                g = nums[0];
            }
            for(int j = 0 ; j < nums.size() ; j++){
                if(i != j){
                            cout<<l<<" ";
                    l = lcm(l,nums[j]);
                    g = gcd(g,nums[j]);

                }
            }
            if(l*g > maxi){
                maxi = l*g;
            }
        }
            return maxi;
    }
    
};