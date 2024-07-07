class Solution {
public:
    int numWaterBottles(int bots, int exc) {
        int ans = bots;
        while(bots>=exc){
            ans += bots/exc;
            bots = (bots/exc)+(bots%exc);
        }
        return ans;
    }
};