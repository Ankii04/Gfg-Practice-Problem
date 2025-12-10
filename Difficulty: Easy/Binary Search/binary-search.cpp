class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        // code here
        if(binary_search(arr.begin(),arr.end(),k))
        {
            int idx = lower_bound(arr.begin(),arr.end(),k) - arr.begin();
            return idx;
        }
        else
        {
            return -1;
        }
    }
};