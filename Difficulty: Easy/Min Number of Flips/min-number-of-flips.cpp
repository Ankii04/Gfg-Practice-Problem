class Solution {
  public:
    int minFlips(string s) {
        // code here
        int count1=0,count2=0;
        bool flag=0;
        for(int i=0;i<s.size();i++)
        {
            if(flag!=s[i]-'0')
            {
                count1++;
            }
                flag=!flag;
        }
        
        flag=1;
        for(int i=0;i<s.size();i++)
        {
            if(flag!=s[i]-'0')
            {
                count2++;
            }
                flag=!flag;
        }
        return min(count1,count2);
        
    }
};
