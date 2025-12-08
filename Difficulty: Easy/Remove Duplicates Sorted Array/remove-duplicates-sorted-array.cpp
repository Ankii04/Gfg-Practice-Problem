class Solution {
  public:
    // Function to remove duplicates from the given array.
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        int index = 0;
        int note = 0;
        for(int i =0;i<arr.size();i++)
        {
            if(note!=arr[i])
            {
                arr[index] = arr[i];
                note = arr[i];
                index++;
            }
        }
        // return arr(0,index);
        return vector<int>(arr.begin(), arr.begin() + index);
    }
    
};