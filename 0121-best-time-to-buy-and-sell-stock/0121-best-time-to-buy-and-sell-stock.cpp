class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buying_stock_price = prices[0];
        int profit = 0;
        for(int i = 0 ; i < prices.size() ; i++){
            if(buying_stock_price > prices[i]){
                buying_stock_price = prices[i];
            }
            else{
                int present_cost = prices[i]  - buying_stock_price;
                profit = max(profit , present_cost);
            }
        }
        return profit;
    }
};

// 7 1 5 3 6 4

// 