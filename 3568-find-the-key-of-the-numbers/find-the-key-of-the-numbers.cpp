class Solution {
public:
    vector<int> Dividing(int n){
        vector<int>v1;
        int i = 0,r;
        while(n != 0 || i != 4){
            r = n%10;
            i++;
            v1.push_back(r);
            n/=10;
        }
        reverse(v1.begin(),v1.end());
        return v1;
    }
    int generateKey(int num1, int num2, int num3) {
        vector<int>v1,v2,v3;
        v1 = Dividing(num1);
        v2 = Dividing(num2);
        v3 = Dividing(num3);
        int ans = min(v1[0],min(v2[0],v3[0]));
        ans *= 10;
        ans += min(v1[1],min(v2[1],v3[1]));
        ans *= 10;
        ans += min(v1[2],min(v2[2],v3[2]));
        ans *= 10;
        ans += min(v1[3],min(v2[3],v3[3]));
        return ans;
        
    }
};