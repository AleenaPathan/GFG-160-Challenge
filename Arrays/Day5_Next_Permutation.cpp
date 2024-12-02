//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
     int n = arr.size();
        int i = n - 2;

        // Step 1: Find the first index `i` such that arr[i] < arr[i + 1]
        while (i >= 0 && arr[i] >= arr[i + 1]) {
            i--;
        }

        if (i >= 0) {
            // Step 2: Find the smallest element in arr[i+1...n-1] that is greater than arr[i]
            int j = n - 1;
            while (arr[j] <= arr[i]) {
                j--;
            }

            // Step 3: Swap arr[i] and arr[j]
            swap(arr[i], arr[j]);
        }

        // Step 4: Reverse the subarray from arr[i + 1] to arr[n - 1]
        reverse(arr.begin() + i + 1, arr.end());
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
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int n = arr.size();
        ob.nextPermutation(arr);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
