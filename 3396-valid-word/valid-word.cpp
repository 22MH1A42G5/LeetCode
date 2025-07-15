class Solution {
public:
    bool isValid(string word) {
        string vow = "aeiouAEIOU";
        int vf = 0 , cf = 0;
        if(word.size() < 3)
        return false;
        for(int i = 0 ;i < word.size(); i++){
            if((word[i] >= 'a' && word[i] <= 'z') || (word[i] >= 'A' && word[i] <= 'Z') || (word[i] >= '0' && word[i] <= '9')){
                if(vow.find(word[i]) != string::npos){
                    vf = 1;
                }
                if(vow.find(word[i]) == string::npos && (word[i] < '0' || word[i] > '9')){
                    cf = 1;
                }
            }
            else{
                cout << word[i] << " ";
                return false;
            }
        }
        cout << vf << " " << cf << "\n";
        if(vf == 1 && cf == 1){
            return true;
        }
        else{
            return false;
        }
    }
};