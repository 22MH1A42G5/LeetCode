class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
       int n=positions.size();
       vector<int>act(n);
      /* for(int i=0;i<n;i++){
        act[i]=i;
       }*/
       iota(begin(act),end(act),0); //0 , 1 ,2 ,3.....n-1

       auto lambda =[&](int &i, int &j){
        return positions[i]<positions[j];
       };
       sort(begin(act),end(act),lambda);
       for(int i=0;i<n;i++){
    cout<<act[i]<<" ";
       }
       stack<int>st;
       for(int i=0;i<n;i++){
        if(directions[act[i]]=='R'){
            st.push(act[i]);
        }else{
            while(!st.empty() and healths[act[i]]>0){
                int idx=st.top();
                st.pop();
                if(healths[idx]>healths[act[i]]){
                    healths[act[i]]=0;
                    healths[idx]-=1;
                    st.push(idx);

                }
                else if(healths[idx]<healths[act[i]]){
                    healths[act[i]]-=1;
                    healths[idx]=0;
                }
                else{
                    healths[act[i]]=0;
                    healths[idx]=0;
                }
            }
        }
       }
       vector<int>ans;
       for(int i=0;i<n;i++){
        if(healths[i]!=0){
            ans.push_back(healths[i]);
        }
       }
       return ans;
    }
};