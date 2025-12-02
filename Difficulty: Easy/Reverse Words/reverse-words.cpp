class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        string t="";
        for(char c:s){
            if(c=='.'){
                if(!t.empty()) v.push_back(t);
                t="";
            } else t+=c;
        }
        if(!t.empty()) v.push_back(t);
        reverse(v.begin(), v.end());
        string ans="";
        for(int i=0;i<v.size();i++){
            ans+=v[i];
            if(i!=v.size()-1) ans+='.';
        }
        return ans;
    }
};
