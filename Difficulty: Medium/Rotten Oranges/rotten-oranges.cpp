class Solution {
  public:
    int orangesRot(vector<vector<int>>& mat) {
        int r = mat.size();
        int c = mat[0].size();
        queue<pair<pair<int,int>,int>> q;
        int fresh = 0;
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(mat[i][j]==2) q.push({{i,j},0});
                else if(mat[i][j]==1) fresh++;
            }
        }
        
        int time = 0;
        int dr[4] = {-1,1,0,0};
        int dc[4] = {0,0,-1,1};
        
        while(!q.empty()){
            int x = q.front().first.first;
            int y = q.front().first.second;
            int t = q.front().second;
            q.pop();
            time = max(time,t);
            
            for(int k=0;k<4;k++){
                int nx = x + dr[k];
                int ny = y + dc[k];
                if(nx>=0 && ny>=0 && nx<r && ny<c && mat[nx][ny]==1){
                    mat[nx][ny]=2;
                    fresh--;
                    q.push({{nx,ny},t+1});
                }
            }
        }
        
        if(fresh>0) return -1;
        return time;
    }
};
