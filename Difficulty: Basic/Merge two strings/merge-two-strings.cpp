
string merge(string s1, string s2) {
    // your
    int i=0,j=0;
    string s3;
   while(i<s1.size()&&j<s2.size())
   {
        s3+=s1[i];
        s3+=s2[j];
        i++,j++;
    }
    while(i<s1.size())
    {
         s3+=s1[i];
         i++;
    }
    while(j<s2.size())
    {
         s3+=s2[j];
         j++;
    }
    
    return s3;
}