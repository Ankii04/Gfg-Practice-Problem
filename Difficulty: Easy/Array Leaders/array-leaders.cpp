class Solution {
public:
    vector<int> leaders(vector<int>& arr) {
        int n=arr.size(), mx=arr[n-1];
        vector<int> v;
        v.push_back(mx);
        for(int i=n-2;i>=0;i--){
            if(arr[i]>=mx){
                mx=arr[i];
                v.push_back(mx);
            }
        }
        reverse(v.begin(), v.end());
        return v;
    }
};
