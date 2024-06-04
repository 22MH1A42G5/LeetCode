class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& met) {
        sort(met.begin(),met.end());
        cout<<endl;
        int i = 0 , j = 1,ans=0;
        while(j < met.size()){
            if(met[j][0] == met[j][1] && met[i][1]==met[j][0]){
                met.erase(met.begin()+j);
            }
            else if(met[i][1] < met[j][0]){
                i++;
                j++;
            }
            else if(met[i][0] <= met[j][0]){
                if(met[i][1] <= met[j][1]){
                    met[i][1]=met[j][1];
                    met.erase(met.begin()+j);
                }
                else{
                    met.erase(met.begin()+j);
                }
            }
        }
        i = 0;
        j = 1;
        while(j < met.size()){
            if(met[i][1] == met[j][0]){
                met[i][1]=met[j][1];
            }
            i++;
            j++;
        }
        // cout<<endl;
        for(int i = 0 ; i < met.size(); i++){
            cout<<met[i][0]<<" "<<met[i][1]<<endl;
        }
        return met;
    }
};