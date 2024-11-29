/*
    Approach - 1 (Finding and Tracking Minimum Buying Price and Maximum Selling Price)
    Time Complexity O(n)
    Space Complexity O(1)
*/
class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        // Time Complexity O(n)  | Space Complexity O(1)
        int maxProfit = 0; // result
        int mbp = prices[0]; // store the minimum buying price
        for(int i =1;i<prices.size();i++){
            mbp = min(mbp , prices[i]); // Track the minimum buying Prices
            maxProfit = max(maxProfit,prices[i] - mbp); // to calculate maximum Profit
        }
        return maxProfit;
    }
};
