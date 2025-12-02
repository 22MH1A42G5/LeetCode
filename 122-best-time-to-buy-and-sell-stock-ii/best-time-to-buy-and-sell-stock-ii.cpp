class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buying_stock_price = prices[0];
        int profit = 0;
        for(int i = 0 ; i < prices.size() ; i++){
            if(buying_stock_price < prices[i]){
                profit += prices[i] - buying_stock_price;
            }
            buying_stock_price = prices[i];
        }
        return profit;
    }
};
// 7 1 5 3 6 4


// 7
// 5
// 3
// 7 1 5 3 6 4

// profit: 4 + 3