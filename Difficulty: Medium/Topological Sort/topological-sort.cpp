class Solution {
  public:
    void dfs(int node , vector<vector<int>>&adj,stack<int>&s,vector<bool>&visited)
    {
        visited[node]=true;
        
        for(int j = 0;j<adj[node].size();j++)
        {
            if(!visited[adj[node][j]])
            {
                dfs(adj[node][j],adj,s,visited);
            }
        }
        s.push(node);
    }
  
  
  
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
         vector<vector<int>> adj(V);
        
        for(int i = 0; i < edges.size(); i++)
        {
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
        }
        vector<bool>visited(V,false);
        stack<int>s;
        for(int i=0;i<V;i++)
        {   
            if(!visited[i])
            {
            dfs(i,adj,s,visited);
            }
        }
        
        
        vector<int>ans;
        while(!s.empty())
        {
            ans.push_back(s.top());
            s.pop();
        }
        return ans;
    }
};