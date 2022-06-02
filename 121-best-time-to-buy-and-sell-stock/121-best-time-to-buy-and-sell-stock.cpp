class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int currMin = prices[0];
        int len = prices.size();
        for(int i = 1; i < len; ++i) {
            //look backwards by 1!
            //if smaller, check against current min and overwrite if smaller
            if (prices[i - 1] > prices[i]) {
                currMin = min(currMin, prices[i]);
            }
            //if larger, run math to calculate profit and overwrite if larger
            if (prices[i - 1] < prices[i]){
                int tempProfit = prices[i] - currMin;
                maxProfit = max(maxProfit, tempProfit);
            }
        }
        return maxProfit;
    }
};