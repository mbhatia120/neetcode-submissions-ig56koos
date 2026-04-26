class Solution {
public:
    vector<pair<int,int>> dir = {{0,1}, {-1,0}, {0,-1}, {1,0}};
    void solve(vector<vector<int>>& grid, int i, int j){
        

        for(int k=0; k<dir.size() ; k++){
            if(i+dir[k].first >= 0 && i+dir[k].first < grid.size() && j+dir[k].second >= 0 && j+dir[k].second<grid[0].size()){
                if(grid[i+dir[k].first][j+dir[k].second] > grid[i][j]+1){
                    grid[i+dir[k].first][j+dir[k].second]= grid[i][j]+1;
                    solve(grid, i+dir[k].first, j+dir[k].second);
                }
            }
        }
        return;
    }
    void islandsAndTreasure(vector<vector<int>>& grid) {
        
        for(int i=0; i<grid.size() ; i++){
            for(int j=0; j<grid[0].size() ; j++){
                if(grid[i][j] == 0){
                    solve(grid,i,j);
                }
            }
        }
        return;
    }
};
