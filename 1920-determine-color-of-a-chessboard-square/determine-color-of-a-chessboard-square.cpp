class Solution {
public:
    bool squareIsWhite(string c) {
        int ans = c[0] - 'a' + c[1] - '0';
        if(ans % 2 == 1)
        return false;
        else
        return true;
    }
};