
class Solution {
public:
int n , m ,res=0;
const int dx[4]={0 , 0 , 1 ,-1 };
const int dy[4]={1 ,-1 , 0 , 0 };

    int dfs(int i , int j,vector<vector<int>>& grid ){
        grid[i][j]=0;
        int area = 1 ;
        for(int _i=0 ; _i<4 ; _i++){
            int _x = i + dx[_i];
            int _y = j + dy[_i];
            if(_x>=0&& _x<grid.size() && _y >=0 && _y<grid[0].size() &&grid[_x][_y]==1)
             area+=dfs(_x,_y,grid);
        }
        return area;
    }
   int maxAreaOfIsland(vector<vector<int>>& grid) {
        n=grid.size();
        m = grid[0].size();
        for(int o = 0 ; o < n ; o++)
        for(int k = 0 ; k < m ; k++){
            if(grid[o][k]==1){
              res = max(res ,dfs(o,k,grid));
            }
        }
        return res ;
    }
};

