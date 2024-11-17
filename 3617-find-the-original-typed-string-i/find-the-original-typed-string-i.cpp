class Solution {
public:
    int possibleStringCount(string w) {
        int i = 0 , j = 1,cnt = 0;
        while(j < w.size()){
            char ch = w[i];
            j = i+1;
            while(j < w.size() && ch == w[j]){
                cout<<w[j];
                cnt++;
                j++;
                i=j;
                i--;
            }
            i++;
        }
        return cnt+1;
    }
};