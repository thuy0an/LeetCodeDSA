class Solution {
    public int rotatedDigits(int n) {
        int[] dp = new int[n+1];
        int cnt = 0;
        dp[0] =1;

        for( int i = 0; i <= n; i++){
            int a = dp[i/10];
            int b = getDigit(i % 10);

            if( a == 1 && b == 1){
                dp[i]= 1;
            }
            else if ( a >= 1 && b >= 1){
                dp[i] = 2;
                cnt++;
            }
        }
        return cnt;
    }

    private int getDigit(int d){
        if ( d == 0 || d ==  1 || d == 8) return 1;
        else if ( d == 2 || d == 5 || d == 6 || d == 9) return 2;
        return 0;
    }
}