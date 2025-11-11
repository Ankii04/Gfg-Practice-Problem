class Solution {
public:
    int missingNum(vector<int>& arr) {
        int n = arr.size();
        long long total = (long long)(n + 1) * (n + 2) / 2;
        long long sum = 0;
        for (int x : arr) sum += x;
        return (int)(total - sum);
    }
};
