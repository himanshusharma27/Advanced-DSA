// BFS 

class Solution {
public:

void bfs(vector<vector<char>>&grid , int i , int j){
    int n = grid.size();
    int m = grid[0].size();

    queue<pair<int,int>>q;
    q.push({i,j});

    grid[i][j] = '0';

    vector<pair<int,int>>dirs = {{-1,0},{1,0},{0,-1},{0,1}};

    while(!q.empty()){
        auto[x,y] = q.front();
        q.pop();

        for(auto [dx,dy]:dirs){
            int newX = x + dx;
            int newY = y + dy;

        if(newX >= 0 && newY >=0 && newX < n && newY < m && grid[newX][newY] == '1'){
            q.push({newX, newY});

            grid[newX][newY] = '0';
        }
        } 
    }
}



    int numIslands(vector<vector<char>>& grid) {
        int count = 0 ;

        for(int i = 0 ;i < grid.size();i++){
            for(int j = 0 ; j<grid[0].size();j++){
                if(grid[i][j] == '1'){
                    count++;
                    bfs(grid, i, j);
                }
            }
        }
        return count;
    }
};



// DFS 

class Solution {
public:
 void dfs(vector<vector<char>>&grid , int i , int j){
    int n = grid.size();
    int m = grid[0].size();

    if(i<0 || j<0 || i>=n ||j>=m||grid[i][j] == '0') return ;

    grid[i][j] = '0';

    dfs(grid,i+1,j); // down
    dfs(grid , i-1 , j); // up 
    dfs(grid , i , j+1); // right
    dfs(grid , i , j-1); // left 

 }

    int numIslands(vector<vector<char>>& grid) {
        int count = 0 ;

        for(int i = 0 ;i < grid.size();i++){
            for(int j = 0 ; j<grid[0].size();j++){
                if(grid[i][j] == '1'){
                    count++;
                    dfs(grid, i, j);
                }
            }
        }
        return count;
    }
};


