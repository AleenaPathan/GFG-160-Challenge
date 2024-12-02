/*
    Approach - 1 Using Unordered_map (Hashtable)
    Time Complexity: O(n)
    Space Complexity: O(n)
*/
class Solution {
  public:
    // Function is to check whether two strings are anagram of each other or not.
    bool areAnagrams(string& s1, string& s2) {
        // Your code here
        unordered_map<char,int> map;
        if(s1.size() != s2.size()) return 0;
        for(char ch:s1) map[ch]++;
        for(char ch:s2){
            if(map[ch]) map[ch]--;
            if(map[ch] == 0)  map.erase(ch);
        }
        return map.size()==0?1:0;
    }
};
