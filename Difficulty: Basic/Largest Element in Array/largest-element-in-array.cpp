class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int l = INT_MIN;
        for(int x: arr)
        {
            if(x>l)
            {
                l=x;
            }
        }
        return l;
    }
};
