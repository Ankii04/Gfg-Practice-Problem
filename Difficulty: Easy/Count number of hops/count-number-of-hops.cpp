
class Solution {
  public:
    // Function to count the number of ways in which frog can reach the top.
    long long find(int step,int n)
    {
        if(step==n)
        {
            return 1;
        }
        if(step>n)
        {
            return 0;
        }
        return find(step+1,n)+find(step+2,n)+find(step+3,n);
    }
    long long countWays(int n) {
        // your code here
    return find(0,n);
    }
};
