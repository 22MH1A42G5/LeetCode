class Solution {
public:
    bool compare(int n1,int n2){
        int k=n1,s=n2;
        if(n1==n2)
            return true;
        int ans=0,flag=0,a,b;
        while(n1!=0 || n2!=0){
            int r1=n1%10;
            int r2=n2%10;
            if(r1!=r2 && flag==0){
                a=r1;
                b=r2;
                flag=1;
                if(ans>0)
                    return false;
            }
            else if(r1!=r2 && flag==1){
                if(r1!=b || r2!=a)
                    return false;
                else
                    ans++;
                flag=0;
            }
            n1/=10;
            n2/=10;
        }
        if(flag==1)
            return false;
        cout<<k<<" "<<s<<endl;
        return true;
            
    }
    int countPairs(vector<int>& nums) {
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(compare(nums[i],nums[j]))
                    cnt++;
            }
        }
        return cnt;
    }
};