class Solution {
public:
    int earliestFinishTime(vector<int>& landSt, vector<int>& landDura, vector<int>& waterSt, vector<int>& waterDura) {
        int minLand = INT_MAX, minWater = INT_MAX;
        vector<pair<int,int>> landIntervals, waterIntervals;
        for(int i = 0; i < landSt.size(); i++) {
            landIntervals.push_back({landSt[i],landSt[i]+landDura[i]});
        }
        for(int i = 0; i < landSt.size(); i++) {
            cout << landIntervals[i].first << " " << landIntervals[i].second << "\n";
        }
        cout << "\n";
        for(int i = 0; i < waterSt.size(); i++) {
            waterIntervals.push_back({waterSt[i],waterSt[i]+waterDura[i]});
        }
        for(int i = 0; i < waterSt.size(); i++) {
            cout << waterIntervals[i].first << " " << waterIntervals[i].second << "\n";
        }
        int mini = INT_MAX, noMini = INT_MAX;
        for(int i = 0; i < landSt.size(); i++) {
            for(int j = 0; j < waterSt.size(); j++) {
                if (landIntervals[i].second <= waterIntervals[j].first) {
                    mini = min(waterIntervals[j].second,mini);
                }
                else {
                    noMini = min(landIntervals[i].second+waterDura[j],noMini);
                }
            }
        }
        for(int i = 0; i < waterSt.size(); i++) {
            for(int j = 0; j < landSt.size(); j++) {
                if (waterIntervals[i].second <= landIntervals[j].first) {
                    mini = min(landIntervals[j].second, mini);
                }
                else {
                    noMini = min(waterIntervals[i].second+landDura[j],noMini);
                }
            }
        }
        return min(mini, noMini);
        
    }
};