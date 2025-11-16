class Solution {
public:
    int getSecondLargest(vector<int>& arr) {
        int n = arr.size();
        int mx = arr[0];
        for(int i=1;i<n;i++) if(arr[i] > mx) mx = arr[i];
        int second = -1;
        for(int i=0;i<n;i++){
            if(arr[i] != mx){
                if(second == -1 || arr[i] > second){
                    second = arr[i];
                }
            }
        }
        return second;
    }
};
