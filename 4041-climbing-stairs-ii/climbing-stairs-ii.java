class Solution {
    public int climbStairs(int n, int[] costs) {
        int a = 0, b=0, c=0;

        for(int i =0; i < n; i++){
            int cos = costs[i] + Math.min( Math.min(c + 1, b + 2*2), a + 3*3);
             a = b; b = c; c = cos;
        }

        return c;
    }
}