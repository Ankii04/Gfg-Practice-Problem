class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int n = arr.size();
        int c = 0, m = 0;
        for (int x : arr) {
            if (c == 0) m = x;
            c += (x == m ? 1 : -1);
        }
        int cnt = 0;
        for (int x : arr) if (x == m) cnt++;
        if (cnt > n / 2) return m;
        return -1;
    }
};
