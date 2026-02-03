// User function Template for C++
class Solution {
  public:
    int removeConsecutiveSame(vector<string>& arr) {
        // Your code goes here
        stack<string>a;
        
        for(int i=0;i<arr.size();i++)
        {
            if(!a.empty() && a.top()==arr[i])
            {
                a.pop();
            }
            else
            {
                a.push(arr[i]);
            }
        }
        return a.size();
    }
};