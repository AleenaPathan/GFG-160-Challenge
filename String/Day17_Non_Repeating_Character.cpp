/*
    Approach - 1 Using Unordered_map (Hashtable / Hashing / Hash)
    Time Complexity: O(n)
    Space Complexity: O(n)
*/
class Solution {
  public:
    // Function to find the first non-repeating character in a string.
    char nonRepeatingChar(string &s) {
        // Your code here
        // Time Complexity: O(n)
        // Space Complexity: O(26)
        unordered_map<char,int> map;
        for(char ch:s) map[ch]++;
        for(char ch:s){
            if(map[ch]==1) return ch;
        }
        return '$';
    }
};
