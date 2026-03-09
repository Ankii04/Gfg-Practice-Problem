class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        unordered_map<char,int>mp;
        int l = 0, ans =-1;
        for(int r=0;r<s.size();r++)
        {
            mp[s[r]]++;
            while(mp.size()>k)
            {
                mp[s[l]]--;
                if(mp[s[l]]==0)
                {
                    mp.erase(s[l]);
                }
                l++;
            }
            if(mp.size()==k)
            {
            ans = max(ans,r-l+1);
            }
        }
        return ans;
        }
};