//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function is to check whether two strings are anagram of each other or not.
    bool areAnagrams(string& s1, string& s2) {
         // If the lengths are different, they cannot be anagrams
        if (s1.size() != s2.size()) {
            return false;
        }

        // Create an array to store frequency of characters
        int freq[26] = {0}; // Array to count frequency of characters

        // Traverse both strings and update the frequency array
        for (int i = 0; i < s1.size(); i++) {
            freq[s1[i] - 'a']++; // Increment frequency for s1
            freq[s2[i] - 'a']--; // Decrement frequency for s2
        }

        // If all values in frequency array are 0, then they are anagrams
        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0) {
                return false;
            }
        }

        return true;
    }
};

//{ Driver Code Starts.

int main() {

    int t;

    cin >> t;

    while (t--) {
        string c, d;

        cin >> c >> d;
        Solution obj;
        if (obj.areAnagrams(c, d))
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends
