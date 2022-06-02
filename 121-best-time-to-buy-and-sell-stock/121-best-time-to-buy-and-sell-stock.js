/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    let maxProfit = 0;
    let currMin = prices[0];
    for(let i = 1; i < prices.length; i++) {
        //look backwards by 1!
        //if smaller, check against current min and overwrite if smaller
        if (prices[i - 1] > prices[i]) {
            currMin = Math.min(currMin, prices[i]);
        }
        //if larger, run math to calculate profit and overwrite if larger
        if (prices[i - 1] < prices[i]){
            let tempProfit = prices[i] - currMin;
            maxProfit = Math.max(maxProfit, tempProfit);
        }
    }
    return maxProfit;
};