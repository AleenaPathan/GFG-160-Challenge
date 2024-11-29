// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
//  Time Complexity: O(n) | Space Complexity: O(1)
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int maxa = -1 , maxa2 =  -1;
        for(int i = 0  ; i<arr.size();i++){
            if(maxa < arr[i]){ maxa2 = maxa ; maxa = arr[i];}
            else if(maxa2 < arr[i] && arr[i] != maxa) maxa2 = arr[i];
        }
        return maxa2;
    }
};