class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        /*sort(nums.begin(),nums.end());
        vector<long long>v;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i]<k){
                v.push_back(nums[i]);
            }
            else
            break;
        }
        long long i=0,j=1,ans=0,fl=0;
        while(!v.empty() and v.size()>1 and j<v.size()){
            long long ft=v[i];
            long long st=v[j];
            v.erase(v.begin());
            v.erase(v.begin());
            ans++;
            long long temp = (ft*2)+st;
            if(temp < k){
                //fl=0;
                cout<<temp<<endl;
                v.push_back(temp);
                sort(v.begin(),v.end());
                for(int i = 0 ; i < v.size() ; i++ ){
                    if(v[i]>temp){
                        v.insert(v.begin()+i,temp);
                        fl=1;
                    }
                }
                if(fl==0){
                    v.push_back(temp);
                }
            }
        }
        if(v.size()==1)
            ans++;
        return ans;*/
        priority_queue<long long, std::vector<long long>, std::greater<long long>> que;
        int ans=0;
        for(int i = 0 ; i < nums.size() ; i ++ ){
            que.push(nums[i]);
        }
        while(que.top()<k and !que.empty() and que.size()>1){
            long long ft=que.top();
            que.pop();
            long long st=que.top();
            que.pop();
            //cout<<ft<<" "<<st<<endl;
            long long temp = (ft*2)+st;
            que.push(temp);
            ans++;
        }
        return ans;
    }
};