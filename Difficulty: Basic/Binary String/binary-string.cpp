class Solution {
  public:
    int binarySubstring(string& s) {
        // code here
        long count=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                count++;
            }
        }

        int c = (count*(count-1))/2;
        return c;
    }
};