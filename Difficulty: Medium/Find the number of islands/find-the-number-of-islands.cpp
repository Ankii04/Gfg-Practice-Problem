class Solution {
  public:
    int countIslands(vector<vector<char>>& grid) {
        // Code here
        int r = grid.size();
        int c = grid[0].size();
        int count=0;
        vector<vector<int>>dist(r,vector<int>(c,0));
        queue<pair<int,int>>q;
        
            for(int i=0;i<r;i++)
            {
                for(int j=0;j<c;j++)
                {
                    if(grid[i][j]=='L' && !dist[i][j])
                    {   count++;
                        q.push({i,j});
                        dist[i][j]=1;
               
                        int ab[8] = {-1,-1,-1,0,0,1,1,1};
                        int ac[8] = {-1,0,1,-1,1,-1,0,1};
                        
                        while(!q.empty())
                        {
                            int rc = q.front().first;
                            int rd = q.front().second;
                            
                            
                            q.pop();
                            for(int k =0;k<8;k++)
                            {
                            int nr = rc + ab[k];
                            int nc = rd + ac[k];
                            
                            if(nr>=0 && nr<r && nc>=0 && nc<c && grid[nr][nc]=='L' && !dist[nr][nc])
                            {
                                dist[nr][nc]=1;
                                q.push({nr,nc});
                            }
                        }
                    }
                }
        }
        }
        
        
        return count;
        
    }
};