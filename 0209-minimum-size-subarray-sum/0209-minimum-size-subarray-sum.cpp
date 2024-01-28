class Solution {
public:
    int minSubArrayLen(int target, vector<int>& v) {
        int s=v[0],su=0;
        int i=0,j=1;
        int min=v.size();
        int mini=v.size();
        int flag=0;
        for(int i=0;i<v.size();i++){
            su+=v[i];
            if(v[i]==target){
                return 1;
            }
            if(v[i]>target){
                mini=1;
            }
        }
        while(j<v.size()){
            if(s+v[j]==target){
                flag=1;
                if(i==j){
                    min=1;
                }
                else{
                    if(min>(j+1-i)){
                        min=j+1-i;
                    }
                }
                //cout<<endl;
                s-=v[i];
                i++;
                s+=v[j];
                j++;
            }
            if(s+v[j]<target){
                //cout<<"HI";
                s+=v[j];
                j++;
            }
            else if(s+v[j]>target){
                if(mini>(j+1-i)){
                    mini=j+1-i;
                }
                s-=v[i];
                i++;
            }
        }
        cout<<mini<<" "<<min;
        if(su>target && flag==0){
            return mini;
        }
        if(flag==0){
            return 0;
        }
        if(min==0){
            return mini;
        }
        if(mini<min){
            return mini;
        }
        return min;
    }
};