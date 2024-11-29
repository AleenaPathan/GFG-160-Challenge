/*
    Approach -1 Using Kadane's Algorithm
    Time Complexity: O(n)
    Space Complexity: O(1)
*/
class Solution {
  public:
    // Function to find maximum product subarray
    int maxProduct(vector<int> &arr) {
        // Your Code Here
    // Using Kadane's Algorithm Approach
    // Time Complexity:O(n) | Space Complexity: O(1);
    int max_so_far = arr[0]; // track the maximum Product valur till that index
    int min_so_far = arr[0]; // track the minimum Product valur till that index
    int res = arr[0];
    for(int i=1;i<arr.size();i++){
        int a = max({arr[i],arr[i]*max_so_far , arr[i]*min_so_far});
        min_so_far = min({arr[i],arr[i]*max_so_far , arr[i]*min_so_far});
        max_so_far = a;
        
        res =max({res,max_so_far , min_so_far});
    }
    return res;
    }
};

/*
    Approach -2 Using Preffix and Suffix
    Time Complexity: O(n)
    Space Complexity: O(1)
*/
// User function Template for C++
class Solution {
  public:
    // Function to find maximum product subarray
    int maxProduct(vector<int> &arr) {
        // Your Code Here
    // Using Preffix and Suffix
    // Time Complexity: O(n)  | Space Complexity: O(1);
    int pre = 1 , suf  =1 ,res = INT_MIN , n =arr.size();
    for(int i=0;i<n;i++){
        if(pre == 0) pre =1;
        if(suf == 0) suf = 1;
        pre *=arr[i];
        suf *= arr[n-1-i];
        res = max({res,pre , suf});
    }
    return res;
    }
};

/*
    Approach -3 Using Brute Force
    Time Complexity: O(n^2)
    Space Complexity: O(1)
*/
class Solution {
  public:
    // Function to find maximum product subarray
    int maxProduct(vector<int> &arr) {
        // Your Code Here
    // Using Brute Force Nested Loop
    // Time Complexity: O(n)  | Space complexity: O(1);
        int res = INT_MIN;
        for(int i =0;i<arr.size();i++){
            int product = 1;
            for(int j = i;j<arr.size();j++){
                product *= arr[j];
                res = max(res , product);
            }
        }
        return res;
    }
};
