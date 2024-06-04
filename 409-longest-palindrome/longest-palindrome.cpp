class Solution {
public:
    int longestPalindrome(string s) {
        map<int,int>mpp;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            mpp[s[i]]++;
        }
        int even=0;
        int odd=0;
        int sin=0;
        int ans=0;
        int maxi=0;
        int temp = 0;
        // if(n == mpp.size()) return 1;
        for(auto it:mpp)
        {
            if(it.second%2==0)
            {
                even+=it.second;
            }
            else if(it.second%2==1)
            {
                odd+=it.second-1;
                temp=1;
            }
        }
        ans=even+odd+temp;
        // if(ans%2==0)
        // {
        //     for(auto it:mpp)
        //     {
        //         if(it.second==1)
        //         {
        //             ans+=1;
        //             break;
        //         }
        //     }
        // }
        if(ans == 0) return 1;
        return ans;
    }
};