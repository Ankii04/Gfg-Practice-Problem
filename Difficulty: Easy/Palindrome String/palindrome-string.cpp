class Solution {
  public:
    bool isPalindrome(string& s) {
        // code here
        string temp =s;
        string a ="";
        for(int i=s.size()-1;i>=0;i--)
        {
            a+=s[i];
        }
        if(a==temp)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};