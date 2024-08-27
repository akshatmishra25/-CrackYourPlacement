class Solution {
  public:
    vector<vector<int>> directions = {{1, 0}, {-1, 0}, {-1, -1}, {1, 1}, {0, 1},
    {0, -1}, {1, -1}, {-1, 1}};
    
    void dfs(int i, int j, vector<vector<char>>& grid, vector<vector<int>>& vis){
        int n = grid.size();
        int m = grid[0].size();
        
        vis[i][j] = 1;
        
        for(auto dir: directions) {
            int newi = i+dir[0];
            int newj = j+dir[1];
            if(newi>=0 && newj>=0 && newi<n && newj<m && !vis[newi][newj] 
            && grid[newi][newj] == '1'){
                dfs(newi, newj, grid, vis);
            }
        }
    }    
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<int>> vis(n, vector<int> (m, 0));
        int cnt = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(!vis[i][j] && grid[i][j] == '1') {
                    cnt++;
                    dfs(i, j, grid, vis);
                }
            }
        }
        return cnt;
    }
};