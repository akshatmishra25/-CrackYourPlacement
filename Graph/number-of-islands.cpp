class Solution {
public:
    void conquer(vector<vector<char>>& grid, int row, int col) {
        if (row < 0 || row >= grid.size() || col < 0 || col >= grid[0].size() || grid[row][col] != '1')
            return;
        
        if (grid[row][col] == '1')
            grid[row][col] = 'M'; // conquer the land and mark it "M" for mine
        
        // keep conquering neighboring land
        conquer(grid, row - 1, col); // up
        conquer(grid, row + 1, col); // down
        conquer(grid, row, col - 1); // left
        conquer(grid, row, col + 1); // right
    }
    int numIslands(vector<vector<char>>& grid) {
       int ans = 0;
       for(int i=0; i<grid.size(); i++){
        for(int j=0; j<grid[0].size(); j++){
            if(grid[i][j]=='1'){
                ans++;
                conquer(grid, i, j);
            }
        }
       }
       return ans; 
    }
};