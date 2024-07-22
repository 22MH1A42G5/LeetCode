class Solution {
public:
    vector<string> sortPeople(vector<string>& nam, vector<int>& hei) {
        map<int,string>mp;
        for(int i = 0 ; i < hei.size() ; i++){
            mp[hei[i]] = nam[i];
        }
        nam.clear();
        for(auto it : mp){
            nam.push_back(it.second);
        }
        reverse(nam.begin() , nam.end());
        return nam;

    }
};