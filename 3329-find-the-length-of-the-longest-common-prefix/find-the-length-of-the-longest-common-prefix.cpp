class Solution {
public:
    void prefGeneration(int num, set<int>& pref) {
        string str = to_string(num);
        string prefixes = "";
        for(int i = 0; i < str.size(); i++) {
            prefixes += str[i];
            pref.insert(stoi(prefixes));
        }
    }
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        // unordered_set<int> 
        set<int> pref1, pref2;
        int maxi = 0;
        for(int i = 0; i < arr1.size(); i++) {
            prefGeneration(arr1[i], pref1);
        }
        for(int i = 0; i < arr2.size(); i++) {
            prefGeneration(arr2[i] , pref2);
        }
        for(int it: pref1) {
            if(pref2.contains(it)) {
                int len = floor(log10(it)) + 1;
                maxi = max(len, maxi);
            }
        }
        return maxi;


    }
};