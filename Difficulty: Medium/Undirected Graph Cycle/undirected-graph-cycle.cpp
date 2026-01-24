class Solution { 
public: 
   
    bool bfs(vector<int> adj[], vector<bool>& visited, int start) 
    { 
        queue<pair<int,int>> q;
        visited[start] = true;
        q.push({start, -1});
        
        while(!q.empty()) 
        { 
            int node = q.front().first; 
            int parent = q.front().second; 
            q.pop(); 
            
            // Iterate through neighbors in adjacency list
            for(int neighbor : adj[node]) 
            { 
                if(!visited[neighbor]) 
                { 
                    visited[neighbor] = true; 
                    q.push({neighbor, node}); 
                } 
                else if(neighbor != parent) 
                { 
                    return true; // Cycle detected
                } 
            } 
        } 
        return false; 
    } 
   
    bool isCycle(int V, vector<vector<int>>& edges) 
    { 
        // BUILD ADJACENCY LIST FROM EDGE LIST
        vector<int> adj[V];
        for(auto& edge : edges) 
        {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        
        vector<bool> visited(V, false); 
         
        // Check all components
        for(int i = 0; i < V; i++) 
        { 
            if(!visited[i]) 
            { 
                if(bfs(adj, visited, i)) 
                    return true; 
            } 
        } 
        return false; 
    } 
};