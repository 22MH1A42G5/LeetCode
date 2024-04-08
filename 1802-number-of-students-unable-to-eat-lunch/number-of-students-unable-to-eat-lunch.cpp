class Solution {
public:
    int countStudents(vector<int>& stus, vector<int>& sdw) {
        int cnt0 = 0 , cnt1 = 0 , scnt0 = 0 , scnt1 = 0;
        for(int i = 0; i < stus.size(); i++){
            if(stus[i]==0){
                cnt0++;
            }
            else
            cnt1++;
        }
        for(int i = 0; i < stus.size(); i++){
            if(sdw[i]==0){
                scnt0++;
            }
            else
            scnt1++;
        }
        int i = 0;
        while(cnt1 != stus.size() && cnt0 != stus.size()){
            if(stus.size()==0)
            return 0;
            if(stus[i]==sdw[0]){
                (stus[i] == 0) ? cnt0-- : cnt1--;
                (sdw[0] == 0) ? scnt0-- : scnt1--;
                stus.erase(stus.begin()+i);
                sdw.erase(sdw.begin());
            }
            else if(stus[i]!=sdw[0]){
                i++;
            }
            if(i==stus.size()){
                i=0;
            }
        }
        i = 0;
        while(stus[0]==sdw[0] && !stus.empty() && !sdw.empty()){
            (sdw[0] == 0) ? scnt0-- : scnt1--;
            (stus[0] == 0) ? cnt0-- : cnt1--;
            stus.erase(stus.begin());
            sdw.erase(sdw.begin());
        }
        if(stus.size() == 0){
            return 0;
        }
        if(sdw.size() == stus.size()){
            if(cnt1==scnt1 && scnt0==0 && cnt0 == 0){
                return 0;
            }
            else if(cnt0==scnt0 && scnt1==0 && cnt1 == 0){
                return 0;
            }
        }
        return stus.size();
        
    }
};