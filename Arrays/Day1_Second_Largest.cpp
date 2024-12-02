//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function returns the second largest element
    int getSecondLargest(vector<int> &arr) {
        int largest = INT_MIN;  // Variable to store the largest element
        int secondLargest = INT_MIN;  // Variable to store the second largest element

        for (int num : arr) {
            if (num > largest) {
                // Update second largest and largest
                secondLargest = largest;
                largest = num;
            } else if (num > secondLargest && num < largest) {
                // Update second largest if a valid candidate is found
                secondLargest = num;
            }
        }

        // If no valid second largest element exists, return -1
        return (secondLargest == INT_MIN) ? -1 : secondLargest;
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
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
