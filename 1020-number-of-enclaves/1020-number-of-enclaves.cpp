class Solution {
public:
    int count=0;
    int numEnclaves(vector<vector<int>>& grid) {
        if(grid.size()==0) return 0;
        int rows = grid.size();
        int cols = grid[0].size();
        int ans = 0;
    
        for(int i=1;i<rows-1;i++){
            for(int j=1;j<cols-1;j++){
                
                if(grid[i][j]==1){
                    count = 0;
                   if(isEnclave(grid,i,j,rows,cols)){
                       ans += count;
                   }
                }
            }
        }
        
        return ans;
    }
    
    
    bool isEnclave(vector<vector<int>>& grid,int i,int j,int rows,int cols){
        if(grid[i][j]==-1 || grid[i][j]==0) return true;
         if(i==0 || j==0 || i==rows-1 || j==cols-1) return false;
        grid[i][j]= -1;
        count++;
        bool left=isEnclave(grid,i,j-1,rows,cols);
        bool right=isEnclave(grid,i,j+1,rows,cols);
        bool up=isEnclave(grid,i-1,j,rows,cols);
        bool down=isEnclave(grid,i+1,j,rows,cols);
        
        return left && right && up && down;
    }
};