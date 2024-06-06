class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        map<int,int>mp;
        if(hand.size() % groupSize != 0){
            return false;
        }
        for(int i = 0 ; i < hand.size() ; i++){
            mp[hand[i]]++;
        }
        int cnt = 0;
        while(!mp.empty()){
            // int tem = mp[mp.begin();
            int st = mp.begin()->first;
            for(int i = 0 ;i < groupSize ; i++){
                if(mp[st+i]==0){
                    return false;
                }
                mp[st+i]--;
                if(mp[st+i] < 1){
                    mp.erase(st+i);
                }
            }
        }
        return true;
    }
};