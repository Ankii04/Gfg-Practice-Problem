class Solution {
  public:
    string isVowel(char c) {
        // code here
        char d = tolower(c);
        if(d=='a'||d=='e'||d=='i'||d=='o'||d=='u')
        {
            return "YES";
        }
        return "NO";
    }
};