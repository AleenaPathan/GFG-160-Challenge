/*
    Approach-1
    Time Complexity O(n)
    Space Complexity O(1)
*/class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int i = 0;
        for(int j = 0 ;j<arr.size();j++){
            if(arr[j] !=0) arr[i++] = arr[j];
        }
        for(;i<arr.size();i++){
            arr[i]=0;
        }
    }
};
/*
    Approach-2
    Time Complexity O(n)
    Space Complexity O(1)
*/
class Solution
{
public:
    void pushZerosToEnd(int arr[], int n)
    {
        // code here
        int nonz = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] != 0)
            {
                swap(arr[j], arr[nonz++]);
            }
        }
    }
};