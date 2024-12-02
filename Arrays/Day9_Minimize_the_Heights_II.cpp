//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
 public:
       int getMinDiff(vector<int> &arr, int k) {
        // Step 1: Sort the array
        sort(arr.begin(), arr.end());
        
        int n = arr.size();
        
        // If there's only one tower, no operation is needed
        if (n == 1) return 0;
        
        // Step 2: Initialize the result with the initial difference (no modification)
        int ans = arr[n-1] - arr[0]; // Initial difference without any changes
        
        // Step 3: Consider all possible combinations of operations
        for (int i = 1; i < n; i++) {
            int minHeight = min(arr[0] + k, arr[i] - k);  // Either increase the smallest or decrease the current tower
            int maxHeight = max(arr[n-1] - k, arr[i-1] + k);  // Either decrease the largest or increase the previous tower
            
            // Update the result with the minimum possible difference
            ans = min(ans, maxHeight - minHeight);
        }

        return ans;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, k;
        cin >> k;
        cin.ignore();
        vector<int> a, b, c, d;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution ob;
        auto ans = ob.getMinDiff(a, k);
        cout << ans << "\n";
        cout << '~' << endl;
    }
    return 0;
}
// } Driver Code Ends
