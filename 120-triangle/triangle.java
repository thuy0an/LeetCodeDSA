class Solution {
    public int minimumTotal(List<List<Integer>> triangle) {
        int n= triangle.size();

        int[] dp = new int[n];

        dp[0] = triangle.get(0).get(0);

        for( int  i =1; i < n; i++){
            for( int j = i; j >= 0; j--) {
                int cur = triangle.get(i).get(j);

                if ( j == 0)
                    dp[j] += cur;
                else if ( j ==i)
                    dp[j] = cur + dp[j-1];
                else
                    dp[j] = cur + Math.min(dp[j-1], dp[j]);
            }
        }

        return Arrays.stream(dp).min().orElse(0);
    }
}