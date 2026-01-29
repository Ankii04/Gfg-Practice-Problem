class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        unordered_map<long long,int> mp;
        long long sum = 0;
        int ans = 0;
        
        for(int i = 0; i < arr.size(); i++) {
            sum += arr[i];
            
            if(sum == k)
                ans = max(ans, i + 1);
            
            if(mp.find(sum - k) != mp.end())
                ans = max(ans, i - mp[sum - k]);
            
            if(mp.find(sum) == mp.end())
                mp[sum] = i;
        }
        return ans;
    }
};
