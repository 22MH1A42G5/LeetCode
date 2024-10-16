class Solution {
public:
    bool canConstruct(string ran, string mag) {
        map<int,int>mpp;
        for(int i=0;i<mag.size();i++){
            mpp[mag[i]]++;
        }
        for(int i=0;i<ran.size();i++){
            mpp[ran[i]]--;
            if(mpp[ran[i]]==-1)
                return false;
        }
        return true;
    }
};