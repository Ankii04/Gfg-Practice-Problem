class Solution {
  public:
    string reverseWords(string &s) {
    
        stack<string>st;
        string add ="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i] =='.')
            {   if(add.size() > 0)
                {
                    
                    st.push(add);
                }
                
                add="";
            }
            else
            {
                add+=s[i];
            }
        }
        if(add.size() > 0)st.push(add);
        string ans = "";
        
       while(!st.empty())
       {
           ans+=st.top();
           st.pop();
           if(!st.empty())
           {
               ans+=".";
           }
       }
       return ans;
    }
};