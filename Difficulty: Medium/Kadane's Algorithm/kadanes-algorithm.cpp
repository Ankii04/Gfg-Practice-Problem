class Solution {
public:
    int maxSubarraySum(vector<int> &arr) {
        int maxi = arr[0], sum = 0;
        for(int x : arr){
            sum += x;
            maxi = max(maxi, sum);
            if(sum < 0) sum = 0;
        }
        return maxi;
    }
};
