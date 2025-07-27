class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int oldColor = image[sr][sc];
        if(oldColor == newColor)   return image ;

        int n = image.size();
        int m = image[0].size();

        queue<pair<int , int>>q;
        q.push({sr,sc});

        vector<int> dx = {-1, 1 , 0 , 0 };
        vector<int> dy = {0 , 0 , -1 , 1};

        image[sr][sc] = newColor;

        while(!q.empty()){
            auto[x,y] = q.front(); q.pop();

            for(int k = 0 ; k<4 ; k++){
                int ni = x + dx[k];
                int nj = y + dy[k];

                if(ni>=0 && nj>=0 && ni<n && nj<m && image[ni][nj] == oldColor){
                    image[ni][nj] = newColor;
                    q.push({ni,nj});
                }
            }
        }


return image ;


    }
};
