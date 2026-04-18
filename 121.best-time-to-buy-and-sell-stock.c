/*
 * @lc app=leetcode id=121 lang=c
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
int maxProfit(int* prices, int pricesSize) {
    
    int min_price = prices[0];
    int max_profit = 0;
    int current_profit = 0;

    for(int i = 0; i < pricesSize; i++){
        if(prices[i] < min_price){
            min_price = prices[i];
        }

        current_profit = prices[i] - min_price;

        if(current_profit > 0 && current_profit > max_profit){
            max_profit = current_profit;
        }

    }

    return max_profit;
}
// @lc code=end

