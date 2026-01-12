class Solution {
  public:
    int perfectSum(vector<int>& arr, int target) {
        const int MOD = 1000000007;
        vector<int> dp(target + 1, 0);
        dp[0] = 1;
        for(int x : arr) {
            if(x == 0) {
                for(int j = 0; j <= target; j++) {
                    dp[j] = (dp[j] * 2) % MOD;
                }
            } else {
                for(int j = target; j >= x; j--) {
                    dp[j] = (dp[j] + dp[j - x]) % MOD;
                }
            }
        }
        return dp[target];
    }
};
