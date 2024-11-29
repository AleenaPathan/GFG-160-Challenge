/*
    Approach - 1 (Using Accumulate Profit)
    Time Complexity O(n)
    Space Complexity O(1)
*/

class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        // Accumate Profit
     // Time Complexity O(n) | Space Complexity O(1);
     int maxProfit = 0  ;
     for(int i=1;i<prices.size();i++){
         if(prices[i] > prices[i-1]) maxProfit += prices[i] - prices[i-1];
     }
     return maxProfit;
    }
};
/*
    Approach - 2 (Using Local Minima and Maxima)
    Time Complexity O(n)
    Space Complexity O(1)
*/
class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
    // Local Maxima and Minima
    // Time Complexity: O(n) | Space Complexity : O(1)
        int maxa = prices[0] , n =prices.size();
        int mina = prices[0];
        int maxProfit = 0;
        int i =0; // track our stock day;
        while(i<n-1){
            while(i<n-1 && prices[i]>=prices[i+1]){i++;}
            mina = prices[i];
            
            while(i<n-1 && prices[i] <= prices[i+1]){i++;}
            maxa = prices[i];
            
            maxProfit += (maxa - mina);
        }
        return maxProfit;
    }
};