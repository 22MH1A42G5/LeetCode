class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int ans = 0;
        int sz = flowerbed.size();
        if(sz == 1) {
            if(flowerbed[0] == 0) {
                if(n <= 1 ) {
                    return true;
                }
                else {
                    return false;
                }
            }
            else {
                return (n==0);
            }
        }
        if(sz >= 2) {
            if(flowerbed[0] == 0 && flowerbed[1] == 0) {
                flowerbed[0] = 1;
                ans++;
            }
            if(flowerbed[sz-1] == 0 && flowerbed[sz-2] == 0) {
                flowerbed[sz-1] = 1;
                ans++;
            }
        }
        for(int i = 1; i < sz-1; i++) {
            if(flowerbed[i] == 0 && flowerbed[i-1] == 0 && flowerbed[i+1] == 0) {
                flowerbed[i] = 1;
                ans++;
            }
        }
        cout << ans << " ";
        return (n <= ans);
    }
};