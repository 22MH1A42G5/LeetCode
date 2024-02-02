class Solution {
public:
    int stoic(string number){
        int i = 0;
        for (char c : number) {
            i = i * 10 + (c - '0');
        }
        return i;
    }
 
    int lendigit(int n){
        string s="";
        for(int i=1;i<=n;i++){
            char ch=i+48;
            s=s+ch;
        }
        //cout<<s<<"HI"<<endl;
        int res=stoic(s);
        return res;
    }
    vector<int> sequentialDigits(int low, int high) {
        vector<int>v;
        int s=log10(low)+1;
        int fst,i;
        i=lendigit(s);
        cout<<i;
        
        int lh=log10(high)+1;
        int sh=log10(i)+1;
        string tem=string(sh,'1');
        int addi=stoi(tem);
        cout<<addi<<endl;
        while(i<=high){
            if(i>=low && i<=high){
                v.push_back(i);
            }
            if(i%10==9){
                sh=sh+1;
                string str=string(sh,'1');
                addi=stoi(str);
                i=lendigit(sh);
                //cout<<addi<<" ";
                continue;
            }
            
            //cout<<i<<endl;
            i+=addi;
           
        }
        cout<<lendigit(2);
        return v;
    }
};