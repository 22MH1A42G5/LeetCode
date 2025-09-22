class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> v(100,0);
        for(int i = 0 ; i < nums.size() ; i++ ){
            v[nums[i]-1]++;
        }
        //for(int i = 0 ; i < )
        int max = 0,cnt=0;
        for(int i = 0 ; i < v.size() ; i++){
            if(v[i]>max){
                max = v[i];
            }
        }
        cout<<max<<endl;
        for(int i = 0 ; i < v.size() ; i++){
            if(v[i] == max){
                cnt++;
            }
        }
        return cnt*max;
    }
};