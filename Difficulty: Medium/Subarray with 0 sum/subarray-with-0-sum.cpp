class Solution {
  public:
    bool subArrayExists(vector<int>& arr) {
        unordered_set<int> s;
        int prefix = 0;
        for(int i = 0; i < arr.size(); i++) {
            prefix += arr[i];
            if(prefix == 0 || s.count(prefix))
                return true;
            s.insert(prefix);
        }
        return false;
    }
};
