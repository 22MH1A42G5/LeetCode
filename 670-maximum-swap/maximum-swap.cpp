class Solution {
public:
    int maximumSwap(int num) {
        vector<int> v1;
        int temp = num;
        unordered_map<int, int> mp;
        
        // Extract digits and store them in v1
        while (temp != 0) {
            v1.push_back(temp % 10);
            temp /= 10;
        }
        
        reverse(v1.begin(), v1.end());
        int ok = 0;
        
        // Create a sorted copy of the digits and map digit to its index
        vector<int> tp;
        for (int i = 0; i < v1.size(); i++) {
            tp.push_back(v1[i]);
            mp[v1[i]] = i;
        }
        
        sort(tp.rbegin(), tp.rend());
        
     
        for (int i = 0; i < v1.size(); i++) {
            if (v1[i] < tp[ok] and mp[tp[ok]]>i) {
                swap(v1[i], v1[mp[tp[ok]]]);
                break;
            } else{
                ok++;
            }
        }
        
        
        num = 0;
        for (int i = 0; i < v1.size(); i++) {
            num = num * 10 + v1[i];
        }
        
        return num;
    }
};