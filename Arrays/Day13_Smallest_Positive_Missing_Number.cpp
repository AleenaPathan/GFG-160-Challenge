/*
    Approach -1 Using Frequency Array
    Time Complexity: O(n)
    Space Complexity: O(n)
*/
class Solution {
  public:
    // Function to find the smallest positive number missing from the array.
    int missingNumber(vector<int> &arr) {
        // Your code here
        int maxa = 0 , mina = 1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>=0) mina = min(mina ,arr[i]);
            maxa = max(maxa,arr[i]);
        }
        vector<int> freq(maxa+1,0);
        for(int i=0;i<arr.size();i++){
            if(arr[i]>=0) freq[arr[i]]++;
        }
        int ans = -1;
        for(int i=mina ;i<=maxa ;i++){
            if(freq[i] == 0){ ans = i ; break;}
        }
        return (ans== -1)?(maxa+1):ans;
    }
};


/*
    Approach - 2 By Negating Array Elements
    Time Complexity: O(n)
    Space Complexity: O(1)
*/
class Solution {
  public:
// Function to partition the array into positive and
// non-positive subarrays
int partition(vector<int> &arr) {
    int pivotIdx = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        // Move positive elements to the left
        if (arr[i] > 0) {
            swap(arr[i], arr[pivotIdx]);
            pivotIdx++;
        }
    }
    // return index of the first non-positive number
    return pivotIdx;
}

// Function for finding the first missing positive number
int missingNumber(vector<int> &arr) {
    int k = partition(arr);
    // Traverse the positive part of the array
    for (int i = 0; i < k; i++) {
        // Find the absolute value to get the original number
        int val = abs(arr[i]);
        // If val is within range, then mark the element at
        // index val-1 to negative
        if (val - 1 < k && arr[val - 1] > 0) {
            arr[val - 1] = -arr[val - 1];
        }
    }
    // Find first unmarked index
    for (int i = 0; i < k; i++) {
        if (arr[i] > 0) {
            return i + 1;
        }
    }
    // If all numbers from 1 to k are marked
    // then missing number is k + 1
    return k + 1;
}
};