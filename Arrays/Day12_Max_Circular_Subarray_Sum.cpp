//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
// arr: input array
    // Function to find maximum circular subarray sum.
    int circularSubarraySum(vector<int> &arr) {
        int n = arr.size();

        // Step 1: Compute the maximum subarray sum using Kadane's algorithm
        int max_kadane = kadane(arr);

        // Step 2: Compute the total array sum
        int total_sum = 0;
        for (int i = 0; i < n; i++) {
            total_sum += arr[i];
            arr[i] = -arr[i]; // Invert the array for minimum subarray computation
        }

        // Step 3: Compute the minimum subarray sum using Kadane's algorithm
        int max_inverted_kadane = kadane(arr);
        int min_kadane = -max_inverted_kadane;

        // Step 4: Calculate the circular maximum sum
        int max_circular = total_sum - min_kadane;

        // Step 5: Handle the edge case where all elements are negative
        if (max_circular == 0) {
            return max_kadane;
        }

        return max(max_kadane, max_circular);
    }

  private:
    // Kadane's algorithm to find the maximum subarray sum
    int kadane(vector<int> &arr) {
        int max_sum = arr[0], current_sum = arr[0];
        for (int i = 1; i < arr.size(); i++) {
            current_sum = max(arr[i], current_sum + arr[i]);
            max_sum = max(max_sum, current_sum);
        }
        return max_sum;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.circularSubarraySum(arr);

        cout << res << endl;
    }
    return 0;
}

// } Driver Code Ends
