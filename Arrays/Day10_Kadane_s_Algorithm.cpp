/*
    Approach -1 Using Kadane's Algorithm
    Time Complexity: O(n)
    Space Complexity: O(1)
*/
class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(vector<int> &arr) {
        // code here...
    // Time Complexity O(n) | Space Complexity: O(1);
        int res  = INT_MIN , max_so_far = 0;
        for(int i=0;i<arr.size();i++){
            max_so_far += arr[i];
            
            if(res < max_so_far) res = max_so_far;
            if(max_so_far < 0) max_so_far = 0;  // kadane's
        }
        return res;
    }
};