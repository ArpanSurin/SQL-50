class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int max_profit = 0;
        for(int i=1; i<prices.size(); i++){
            buy = min(buy, prices[i]);
            max_profit = max(max_profit, prices[i] - buy);
        }
        return max_profit;
    }
};