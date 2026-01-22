// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string s1, string s2) {
    // Your code goes here
    vector<int>h1(26,0);
    vector<int>h2(26,0);
    
    for(char x: s1)
    {
        h1[x-'a']++;
    }
    for(char x: s2)
    {
        h2[x-'a']++;
    }
    int ans=0;
    for(int i=0;i<26;i++)
    {
        ans+=abs(h1[i]-h2[i]);
    }
    return ans;
    
}