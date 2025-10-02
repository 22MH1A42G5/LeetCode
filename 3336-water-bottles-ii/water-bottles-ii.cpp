class Solution {
public:
    int maxBottlesDrunk(int bots, int exc) {
        int empbots = bots;
        int ans = bots;
        bots = 0;
        while(empbots >= exc){
            empbots -= exc;
            ans++;
            exc++;
            empbots++;
        }
        return ans;
    }
};