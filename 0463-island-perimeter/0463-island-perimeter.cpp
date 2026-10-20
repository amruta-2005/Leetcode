class Solution {
public:
    int m,n;
    int islandPerimeter(vector<vector<int>>& grid) {
       m=grid.size();
       n=grid[0].size();
       int par=0;
       for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    par+=4;
                    if(i>0 && grid[i-1][j]==1){
                        par-=2;
                    }
                    if(j>0 && grid[i][j-1]==1){
                        par-=2;
                    }
                }
            }
       }
       return par;
    }
};