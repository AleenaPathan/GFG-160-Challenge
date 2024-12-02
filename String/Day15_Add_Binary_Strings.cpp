//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string addBinary(string& s1, string& s2) {
     int i = s1.size() - 1, j = s2.size() - 1;
        int carry = 0;
        string result = "";

        // Add the binary numbers from right to left
        while (i >= 0 || j >= 0 || carry) {
            int bit1 = (i >= 0) ? s1[i] - '0' : 0;
            int bit2 = (j >= 0) ? s2[j] - '0' : 0;

            int sum = bit1 + bit2 + carry;

            // If sum is 2 or 3, we have a carry
            carry = sum / 2;
            result += (sum % 2) + '0'; // Append the result bit (either 0 or 1)

            i--;
            j--;
        }

        // Reverse the result to get the correct order (since we built it backwards)
        reverse(result.begin(), result.end());

        // Remove leading zeros if any
        while (result.size() > 1 && result[0] == '0') {
            result.erase(result.begin());
        }

        return result;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string A, B;
        cin >> A >> B;
        Solution ob;
        cout << ob.addBinary(A, B);
        cout << "\n";

        cout << "~"
             << "\n";
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends
