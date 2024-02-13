class Solution {
public:
    string firstPalindrome(vector<string>& vec) {
        for(int i = 0 ; i < vec.size() ; i ++ ){
            string s = vec[i];
            reverse(s.begin(),s.end());
            cout<<s<<" ";
            if(vec[i]==s){
                return vec[i];
            }
            //if(vec[i]==reverse(s.begin(),s.end())){
              //  return vec[i];
            //}
        }
        return "";
    }
};