class Solution {
public:
    int numberOfChild(int n, int k) {
        int i=0;
        if(n==2){
            if(k%2!=0)
            return 1;
            else
                return 0;
        }
        if(n > k){
            for(int i = 1 ; i < n ; i++){
                k--;
                if(k==0){
                    return i;
                }
            }
        }
        while(k>0){
            if(i==0){
                for(i = 1 ; i < n ; i++){
                    k--;
                    // if(i==2)
                        // cout<<"HI";
                    cout<<i<<" ";
                    if(k==0){
                        return i;
                    }
                }
                // cout<<i;
            }
            // k--;
            if(k==0){
                return i;
            }
            // cout<<i;
            if(i==n){
                // k--;
                for(int i = n-2 ; i >= 0 ; i--){
                    cout<<i<<" ";
                    k--;
                    if(k==0){
                        return i;
                    }
                }
                i=0;
                // cout<<i<<" ";
            }
            // cout<<i<<" ";
        }
        return -1;
    }
};