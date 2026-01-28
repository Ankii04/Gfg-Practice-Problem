class Solution {
  public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int newColor) {
        // code here
        
        int oldColor=image[sr][sc];
        if(oldColor==newColor) return image;
        int r = image.size();
        int c = image[0].size();
        
        queue<pair<int,int>>q;
        q.push({sr,sc});
        image[sr][sc]=newColor;
        int dr[4] = {-1,0,0,1};
        int dc[4] = {0,-1,1,0};
        while(!q.empty())
        {
            int i = q.front().first;
            int j = q.front().second;
            q.pop();
            for(int k=0;k<4;k++)
            {
               int ni=i+dr[k],nj=j+dc[k];
                if(ni>=0&&nj>=0&&ni<r&&nj<c&&image[ni][nj]==oldColor)
                {
                
                    image[ni][nj]=newColor;
                    q.push({ni,nj});
                }
                
            }
        }
        return image;
    }
};