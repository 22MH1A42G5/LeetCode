class Solution {
public:
    static bool compareY(vector<int>&a , vector<int>&b){
        return a[1] < b[1];
    }
    static bool compareX(vector<int>&a , vector<int>&b){
        return a[0] < b[0];
    }
    bool checkValidCuts(int n, vector<vector<int>>& rect) {
        sort(rect.begin() , rect.end() , compareY);
        int size = rect.size();
        // for(int i = 0 ; i < size ; i++){
        //     cout << rect[i][0] << " " << rect[i][1] << " " << rect[i][2] << " " << rect[i][3] << "\n";
        // }
        int maxi = 0;
        vector<int>cuts;
        cuts.push_back(rect[0][1]);
        for(int i = 0 ; i < size ; i++){
            maxi = rect[i][3];
            while(i < size-1 && rect[i][1] == rect[i+1][1]){
                maxi = max(rect[i+1][3] , maxi);
                i++;
            }
            if(rect[i][1] < cuts[cuts.size()-1]){
                maxi = max(cuts[cuts.size()-1] , maxi);
                cuts.pop_back();
            }
            cuts.push_back(maxi);
        }
        // for(int i = 0 ; i < cuts.size() ; i++){
        //     cout << cuts[i] << " ";
        // }
        if(cuts.size() > 3)
            return true;
        cuts.clear();
        sort(rect.begin() , rect.end() , compareX);
        cuts.push_back(rect[0][0]);
        for(int i = 0 ; i < size ; i++){
            maxi = rect[i][2];
            while(i < size-1 && rect[i][0] == rect[i+1][0]){
                maxi = max(rect[i+1][2] , maxi);
                i++;
            }
            if(rect[i][0] < cuts[cuts.size()-1]){
                maxi = max(cuts[cuts.size()-1] , maxi);
                cuts.pop_back();
                // rect[i][0] = maxi;
            }
            cuts.push_back(maxi);
        }
        for(int i = 0 ; i < cuts.size() ; i++){
            cout << cuts[i] << " ";
        }
        if(cuts.size() > 3)
            return true;
        return false;
    }
};