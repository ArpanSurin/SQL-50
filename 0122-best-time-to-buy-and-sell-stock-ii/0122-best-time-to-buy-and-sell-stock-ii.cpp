class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int start = prices[0];
        for(int i=1; i<prices.size(); i++){
            if(prices[i] > start){
                max_profit += prices[i] - start;
            }
            start = prices[i];
            cout << max_profit << " ";
        }
        return max_profit;
    }
};