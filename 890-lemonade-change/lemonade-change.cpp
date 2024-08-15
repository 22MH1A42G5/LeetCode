class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int k = 0,t = 0,i = 0;
        while(k >= 0 && i < bills.size()){
            if(bills[i] == 5)
            k++;
            if( bills[i] == 10){
                k -= 1;
                t++;
            }
            if(bills[i] == 20){
                if(t > 0 && k > 0){
                    t-=1;
                    k-=1;
                }
                else if(t <=0 && k > 2){
                    k -= 3;
                }
                else{
                    return false;
                }
            }
            if(k < 0){
                return false;
            }
            cout<<k<<" "<<t<<endl;
            i++;
        }
        return true;
    }
};