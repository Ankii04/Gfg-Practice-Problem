class Solution {
  public:
    string findOrder(vector<string> &words) {
        int n = words.size();
        
        vector<vector<int>> adj(26);
        vector<int> indegree(26, 0);
        vector<bool> present(26, false);
        
        for(auto &w : words){
            for(char c : w){
                present[c - 'a'] = true;
            }
        }
        
        for(int i = 0; i < n - 1; i++){
            string s1 = words[i];
            string s2 = words[i + 1];
            int len = min(s1.size(), s2.size());
            bool found = false;
            
            for(int j = 0; j < len; j++){
                if(s1[j] != s2[j]){
                    adj[s1[j]-'a'].push_back(s2[j]-'a');
                    indegree[s2[j]-'a']++;
                    found = true;
                    break;
                }
            }
            
            if(!found && s1.size() > s2.size()) return "";
        }
        
        queue<int> q;
        for(int i = 0; i < 26; i++){
            if(present[i] && indegree[i] == 0){
                q.push(i);
            }
        }
        
        string ans = "";
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            ans += char(node + 'a');
            
            for(int v : adj[node]){
                indegree[v]--;
                if(indegree[v] == 0){
                    q.push(v);
                }
            }
        }
        
        int countPresent = 0;
        for(int i = 0; i < 26; i++){
            if(present[i]) countPresent++;
        }
        
        if(ans.size() != countPresent) return "";
        
        return ans;
    }
};
