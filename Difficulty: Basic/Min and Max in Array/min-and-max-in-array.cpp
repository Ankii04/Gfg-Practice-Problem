class Solution {
public:
    vector<int> getMinMax(vector<int> arr) {
        int mn = arr[0], mx = arr[0];
        for(int x : arr) {
            if(x < mn) mn = x;
            if(x > mx) mx = x;
        }
        return {mn, mx};
    }
};
