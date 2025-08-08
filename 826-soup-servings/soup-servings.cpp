class Solution {
public:
    unordered_map<int, unordered_map<int, double>> dp;

    double dfs(int a, int b){
        if( a <= 0 && b <= 0) return 0.5;
        if( a <= 0 ) return 1;
        if( b <= 0 ) return 0;
        if( dp[a].count(b)) return dp[a][b];
        double res = 0.25 * (
            dfs(a - 4, b) +
            dfs(a - 3, b - 1) +
            dfs(a - 2, b - 2) +
            dfs(a - 1, b - 3)
        );
        return dp[a][b] = res;
    }

    double soupServings(int n) {
        int m = ceil(n/25.0);
        for(int k=1; k <=m; k++) // số n quá lớn
            if( dfs(k,k) > 1 -1e-5)
                return 1;
        return dfs(m,m);
    }
};