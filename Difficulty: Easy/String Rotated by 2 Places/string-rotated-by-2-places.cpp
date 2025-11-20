class Solution {
  public:
    bool isRotated(string& s1, string& s2) {
        // code here
        
        if(s1.size() !=s2.size()) return false;
        string clockwise = s1 , antoclockwise = s1;
        rotate(clockwise);
        rotate(clockwise);
        
        if(clockwise==s2)
        {
            return true;
        }
        
        anticlockwise(antoclockwise);
        anticlockwise(antoclockwise);
        
        if(antoclockwise==s2)
        {
            return true;
        }
        
        return false;
    }
    
    string rotate(string &a)
    {   char c = a[a.size()-1];
        for(int i=a.size()-1;i>0;i--)
        {
            a[i] = a[i - 1];
        }
        a[0]  = c;
        return a;
    }
    
    string anticlockwise(string &b)
    {
        char c = b[0];
        
        for(int i=0;i<b.size()-1;i++)
        {
            b[i] = b[i+ 1];
        }
        b[b.size()-1] = c;
        return b;
    }
    
};
