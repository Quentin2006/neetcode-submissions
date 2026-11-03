class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) return 0;

        // buy day
        int l = 0;
        // sell day
        int r = 1;

        int max_profit = 0;

        while (r < prices.size()) {
            if (prices[l] < prices[r]) {
                int profit = prices[r] - prices[l];
                max_profit = max(max_profit, profit);
            }
            
            else l = r;
            ++r;
        }

        if (max_profit < 0) return 0;
        return max_profit;
    }
};
