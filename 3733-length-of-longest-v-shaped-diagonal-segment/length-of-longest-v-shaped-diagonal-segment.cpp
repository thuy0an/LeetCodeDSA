class Solution {
public:
    vector<pair<int,int>> dirs = {{1,1}, {1,-1}, {-1,-1}, {-1,1}};

    int lenOfVDiagonal(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<vector<int>>> memo(m, vector<vector<int>>(n, vector<int>(1<<3, 0)));
        int res =0;
        for(int i=0; i < m; i++)
            for(int j=0; j <n;j++){
                if( grid[i][j] != 1) continue;
                vector<int> maxStep = {m-i, j+1, i+1, n-j};
                for(int k=0; k< 4; k++)
                    if(maxStep[k] > res)
                        res = max(res, dfs(i,j,k, 1, 2, grid, memo) +1);
            }
        return res;

    }

    int dfs(int i, int j, int k, int canTurn, int target, vector<vector<int>>& grid,vector<vector<vector<int>>>& memo
    ){
        int m = grid.size(), n = grid[0].size();
        i += dirs[k].first;
        j += dirs[k].second;

        if( i <0 || i >= m || j< 0 || j>= n || grid[i][j] != target)
            return 0;

        // mask làm index 3 cho memo; gộp hướng hiện tại và ktra còn turn dc ko
        // làm ra 8 trạng thái
        int mask = (k << 1) | canTurn;
        if( memo[i][j][mask] > 0)
            return memo[i][j][mask];

        int res = dfs(i, j, k, canTurn, 2-target, grid, memo);
        if( canTurn ==1){
            // giới hạn số bước đi sau khi rẽ
            vector<int> maxStep = {m-i-1, j, i, n-j-1};
            int nk = (k+1)%4;
            if( maxStep[nk] > res)
                res = max(res, dfs(i, j, nk, 0, 2 -target, grid, memo));
        }
        
        memo[i][j][mask] = res+1;
        return memo[i][j][mask];
        
    }
};