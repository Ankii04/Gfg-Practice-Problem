class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        sort(arr.begin(),arr.end());
        int left = 0,right = arr.size()-1,sum=0;
        while(left<right)
        {
            sum = arr[left]+arr[right];
            if(sum==target)
            {
                return true;
            }
            if(sum>target)
            {
                right--;
            }
            else
            {
                left++;
            }
        }
        return false;
    }
};