class Solution {
  public:
    bool checkEqual(vector<int>& a, vector<int>& b) {
        // code here
        if(a.size()!=b.size())return false;
        unordered_map<int,int>mp;
        for(int x: a)
        {
            mp[x]++;
        }
        for(int x: b)
        {
            if(mp[x]==0)return false;
            mp[x]--;
        }
        return true;
    }
};