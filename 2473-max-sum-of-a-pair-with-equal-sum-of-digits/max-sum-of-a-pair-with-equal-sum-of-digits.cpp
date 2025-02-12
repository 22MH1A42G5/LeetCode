class Solution {
public:
    int sumDigits(int num) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }
    int maximumSum(vector<int>& nums) {
        map<int,priority_queue<int>> mpp;
        vector<int>vec(nums.size());
        for(int i = 0 ; i < nums.size() ; i++){
            vec[i] = sumDigits(nums[i]);
        }
        for(int i = 0 ; i < vec.size() ; i++){
            // cout<<vec[i]<<" ";
            mpp[vec[i]].push(nums[i]);
        }
        int tmaxi = -1;
        for(auto it:mpp){
            // cout<<it.first<<":";
            if(it.second.size() > 1){
                int s = it.second.top();
                it.second.pop();
                s += it.second.top();
                // it.second.pop();
                tmaxi = max(tmaxi , s);
            }
            // while(!it.second.empty()){
            //     cout<<it.second.top()<<" ";
            //     it.second.pop();
            // }
            cout<<"\n";
        }
        return tmaxi;

    }
};