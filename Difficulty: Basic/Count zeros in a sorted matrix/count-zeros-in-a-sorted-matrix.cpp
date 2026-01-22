//Back-end complete function Template for C++

class Solution {
  public:
    int countZeros(vector<vector<int>> A) {
        // code here
        int count = 0, r = A.size(),col = A[0].size();
        
        int i = 0 , j = col - 1;
        while(i<r && j>=0)
        {
            while(i<r && A[i][j]==1)
            {
                j--;
            }
            
            count+=j+1;
            i++;
        }
        return count;
    }
};