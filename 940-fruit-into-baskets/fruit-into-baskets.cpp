class Solution {
public:
    int totalFruit(vector<int>& frts) {
        int n = frts.size();
        pair<int,int>pr1,pr2;
        pr1.first = -1;
        pr2.first = -1;
        pr1.second = 0;
        pr1.second = 0;
        int i = 0 , j = 0;
        int maxi = 0;
        while(j < n){
            if(pr1.second == 0){
                pr1.second++;
                pr1.first = frts[j];
            }
            else if(pr2.second == 0 && frts[j] != pr1.first){
                pr2.second++;
                pr2.first = frts[j];
            }
            else{
                if(frts[j] == pr1.first){
                    pr1.second++;
                }
                else if(frts[j] == pr2.first){
                    pr2.second++;
                }
                else{
                    while(pr1.second != 0 && pr2.second != 0){
                        if(frts[i] == pr1.first){
                            pr1.second--;
                        }
                        else if(frts[i] == pr2.first){
                            pr2.second--;
                        }
                        i++;
                    }
                    if(pr1.second == 0){
                        pr1.second++;
                        pr1.first = frts[j];
                    }
                    else if(pr2.second == 0){
                        pr2.second++;
                        pr2.first = frts[j];
                    }
                }
            }
            maxi = max(maxi , j-i+1);
            j++;
        }
        return maxi;
    }
};

// 3 3 3 1 2 1 1 2 3 3 4

// 1 3 1 3 2 1 1 2 1 3

// 1 0 1 4 1 4 1 2 3
