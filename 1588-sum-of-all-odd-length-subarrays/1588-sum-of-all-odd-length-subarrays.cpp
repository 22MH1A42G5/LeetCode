class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        vector<int>v;
        int s=0;
        for(int i=0;i<arr.size();i++){
            for(int j=i;j<arr.size();j++){
                v.push_back(arr[j]);
                //s+=v[j];
                //cout<<endl;
                if(v.size()%2==1){
                    for(int j=0;j<v.size();j++){
                        s+=v[j];
                        //cout<<v[j]<<" ";
                    }
                    //cout<<endl;
                }
            }
            //s=0;
            v.clear();
        }
        return s;
        
    }
};