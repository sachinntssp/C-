class Solution {
public:
    
void dfs(int i, int j, vector<vector<char>>& grid, vector<int>& vis){

    int n=grid.size();
    int m=grid[0].size();
    if(i<0 || j<0) return;
    if(i>=n || j>=m) return;
    if(vis[i*m+j] == 1) return;
    if(grid[i][j]=='0') return;

    vis[i*m+j]=1;

    dfs(i-1,j,grid,vis);
    dfs(i+1,j,grid,vis);
    dfs(i,j-1,grid,vis);
    dfs(i,j+1,grid,vis);

}

int numIslands(vector<vector<char>>& grid) {
    vector<int> vis(grid.size()*grid[0].size(),0);
    int ct=0;
    for(int i=0;i<grid.size();i++){
        for(int j=0;j<grid[0].size();j++){
            if(vis[i*grid[0].size()+j] || grid[i][j]=='0') continue;
            dfs(i,j,grid,vis);
            ct++;
        }
    }        
return ct;
}
    
};