class Solution {
public:
    vector<int> find(vector<int>& arr, int x) {
        int n = arr.size();
        vector<int> ans(2, -1);

        int l = 0, r = n - 1;
        while (l <= r) {
            int m = l + (r - l) / 2;
            if (arr[m] == x) {
                ans[0] = m;
                r = m - 1;
            } else if (arr[m] < x) {
                l = m + 1;
            } else {
                r = m - 1;
            }
        }

        l = 0;
        r = n - 1;
        while (l <= r) {
            int m = l + (r - l) / 2;
            if (arr[m] == x) {
                ans[1] = m;
                l = m + 1;
            } else if (arr[m] < x) {
                l = m + 1;
            } else {
                r = m - 1;
            }
        }

        return ans;
    }
};
