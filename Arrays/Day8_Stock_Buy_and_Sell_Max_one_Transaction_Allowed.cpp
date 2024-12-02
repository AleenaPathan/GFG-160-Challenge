//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // If the array is empty or has only one price, no profit can be made
        int n = prices.size();
        if (n <= 1) return 0;
        
        // Initialize variables
        int minPrice = prices[0];  // The first price is the initial minimum price
        int maxProfit = 0;  // Start with no profit
        
        // Iterate through the prices
        for (int i = 1; i < n; i++) {
            // If we find a new lower price, update minPrice
            if (prices[i] < minPrice) {
                minPrice = prices[i];
            }
            // Calculate profit if we sold at current price
            else {
                maxProfit = max(maxProfit, prices[i] - minPrice);
            }
        }
        
        return maxProfit;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> prices;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            prices.push_back(number);
        }

        Solution ob;
        int ans = ob.maximumProfit(prices);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends
