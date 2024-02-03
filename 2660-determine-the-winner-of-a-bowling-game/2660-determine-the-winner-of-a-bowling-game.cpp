class Solution {
public:
    int isWinner(vector<int>& p1, vector<int>& p2) {
        int s1=p1[0],s2=p2[0],i=0;
        vector<int>v;
        //reverse(p1.begin(),p2.end());
        for(int i=1;i<p1.size();i++){
            if(i-2>-1){
                if(p1[i-1]>=10){
                    s1+=2*p1[i];
                }
                else if(p1[i-2]>=10){
                    s1+=2*p1[i];
                }
                else{
                    s1+=p1[i];
                }
            }
            else if(i-2==-1){
                if(p1[i-1]>=10){
                    s1+=2*p1[i];
                }
                else{
                    s1+=p1[i];
                }
            }
        }
        //return s1;
        for(int i=1;i<p2.size();i++){
            if(i-2>-1){
                if(p2[i-1]>=10){
                    s2+=2*p2[i];
                }
                else if(p2[i-2]>=10){
                    s2+=2*p2[i];
                }
                else{
                    s2+=p2[i];
                }
            }
            else if(i-2==-1){
                if(p2[i-1]>=10){
                    s2+=2*p2[i];
                }
                else{
                    s2+=p2[i];
                }
            }
        }
        if(s1==s2) return 0;
        return s1>s2?1:2;
    }
};