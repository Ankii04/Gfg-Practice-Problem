// User function Template for C++

class Solution {
  public:
  
  
  
   int dfs(int u,vector<vector<int>>&adj,vector<bool>&visited)
        {
            visited[u]=1;
            for(int i=0;i<adj.size();i++)
            {
                if(adj[u][i]==1 && !visited[i])
                {
                    dfs(i,adj,visited);
                }
            }
        }
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        
        vector<bool>visited(V,0);
        int count=0;
        
        for(int i=0;i<V;i++)
        {
            if(!visited[i])
            {
                count++;
                dfs(i,adj,visited);
            }
        }
        return count;
    
        
    }
};